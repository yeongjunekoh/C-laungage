/*
daytime 클라이언트 프로그램이 실행되기 위해서는
서버쪽에서 xinetd의 daytime이 구동하고 있어야한다.
coder YoWu
*/
 
#include <iostream>
#include <string>
#include <time.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <arpa/inet.h>
#include <unistd.h>

using namespace std;

void ShowErrorMessage(string message){
    cout << "[오류 발생]: " << message << '\n';
    system("pause");
    exit(1);
}

int main()
{
        int clnt_sock;
        struct sockaddr_in serv_addr;
        
        int serverPort = 9876;
        char received[256];
        string sent;

        clnt_sock = socket(PF_INET, SOCK_STREAM, 0);

        if(clnt_sock == -1)
                ShowErrorMessage("socket()");
        
        memset(&serv_addr, 0, sizeof(serv_addr));
        serv_addr.sin_family = AF_INET;
        serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
        serv_addr.sin_port = htons(serverPort);

        if(connect(clnt_sock, (sockaddr*)&serv_addr, sizeof(serv_addr)) == -1)
                ShowErrorMessage("connect()");
                cout << "[현재 상태] connect()\n";
        
        while(1){
                cout << "[메시지 전송]: ";
                getline(cin,sent);
                if(sent == "")continue;
                send(clnt_sock, sent.c_str(), sent.length(), 0);
                int length = recv(clnt_sock, received, sizeof(received), 0);
                received[length] = '\0';
                if(strcmp(received, "[exit]") == 0){
                        cout << "[서버 종료]\n";
                        break;
                }
                cout << "[서버 메시지]: "<< received <<'\n';
        }
        close(clnt_sock);
        system("pause");
        return 0;
}
