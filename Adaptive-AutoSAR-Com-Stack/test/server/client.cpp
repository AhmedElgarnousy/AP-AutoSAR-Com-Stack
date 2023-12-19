#include <iostream>
#include<sys/types.h>
#include<unistd.h>
#include<sys/socket.h>
#include<netdb.h>
#include<arpa/inet.h>
#include<arpa/inet.h>
#include<string.h>
#include<string>


using namespace std;

int main(){
    cout<<"hello from client\n";

    /*
       create a socket 
       create a hint structure for the server we're connecting with
       while loop:
            Enter lines of text
            send to server
            wait for response 
            Display the response 
        close the socket
    */
   int sock = socket(AF_INET, SOCK_STREAM, 0);
   if(sock == -1){
    return 1;
   }
   int port = 54000;

   string ipAddress = "127.0.1.1";

    sockaddr_in hint;
    hint.sin_family = AF_INET;
    hint.sin_port =htons(port);
    inet_pton(AF_INET, ipAddress.c_str(), &hint.sin_addr);

    int connectRes = connect(sock, (sockaddr*)&hint, sizeof(hint));

    if(connectRes == -1)
    {
        return 1;
    }

    char buf[4096];
    string userInput;

    do{

        cout<< "> ";
        getline(cin, userInput);

        int sendRes = send(sock, userInput.c_str(), userInput.size() + 1, 0);
        if(sendRes == -1)
        {
            cout<< "Could not send to server! whoops!\r\n";
            continue;
        }


        memset(buf, 0, 4096);
        int byteReceived = recv(sock, buf, 4096, 0);

        cout<< "SERVER> "<< string(buf, byteReceived) << "\r\n";
    
    }while(1);

    close(sock);

    return 0;
}
