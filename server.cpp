#include <iostream>
#include <string>
#include <time.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
//소켓 프로그래밍에 사용될 헤더파일 선언

using namespace std;

void ShowErrorMessage(string message){
    cout << "[오류 발생]: " << message << '\n';
    system("pause");
    exit(1);
}

int main()
{
    int serv_sock;
    int clnt_sock;

    struct sockaddr_in serv_addr;
    struct sockaddr_in clnt_addr;
    socklen_t clnt_addr_size;
    
    int serverPort = 9876;
    char received[256];

    serv_sock = socket(PF_INET, SOCK_STREAM, 0);

    if(serv_sock == -1)
        ShowErrorMessage("socket()");

    memset(&serv_addr, 0, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    serv_addr.sin_port = htons(serverPort);

    if(::bind(serv_sock, (sockaddr*)&serv_addr, sizeof(serv_addr)) == -1)
        ShowErrorMessage("bind()");
        cout << "[현재 상태] bind()\n";

    if(listen(serv_sock, 5) == -1)
        ShowErrorMessage("listen()");
        cout << "[현재 상태] listen()\n";

    int sizeclnt_addr = sizeof(clnt_addr);
    clnt_sock = accept(serv_sock, (sockaddr*)&clnt_addr, &clnt_addr_size);
    cout << "[현재 상태] accept()\n";

    if(clnt_sock == -1)
    ShowErrorMessage("accept()");

    while(1){
        int length = recv(clnt_sock, received, sizeof(received),0);
        received[length] = '\0';
        cout << "[클라이언트 메시지]: " << received << '\n';
        cout << "[메시지 전송]: " << received << '\n';
        if(strcmp(received, "[exit]") == 0){
            send(clnt_sock, received, sizeof(received) - 1, 0);
            cout << "[서버 종료]\n";
            break;
        }
        send(clnt_sock, received, sizeof(received) - 1, 0);
    }

    close(clnt_sock);
    close(serv_sock);
    system("pause");
    return 0;
}