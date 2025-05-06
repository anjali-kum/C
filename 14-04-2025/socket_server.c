/**************************Socket server file***********************/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<string.h>
#include<sys/wait.h>
#include<arpa/inet.h>

#define PORT 8080
int main(){

int server_fd, new_socket, valread;
struct sockaddr_in address;		//structure for internet socket
int addrlen = sizeof(address);
int opt = 1;
char buffer[1024]={0};
char *hello = "Hello Anjali from server";


//create a socket
if((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0){
	perror("socket failed");
	exit(EXIT_FAILURE);
}
address.sin_family = AF_INET;
address.sin_addr.s_addr = INADDR_ANY;
address.sin_port = htons(PORT);

//BIND THE SOCKET TO A PORT

if(bind(server_fd,(struct sockaddr*)&address,sizeof(address))<0){
	perror("bind failed");
	exit(EXIT_FAILURE);
}

//Listen for Incoming connections
if(listen(server_fd,3)<0){
	perror("listen");
	exit(EXIT_FAILURE);
}
//Accepting incoming connections
if((new_socket = accept(server_fd,(struct sockaddr*)&address,(socklen_t *)&addrlen))<0)
{
	perror("accept");
	exit("EXIT_FAILURE");
}
//Read data from client
valread = read(new_socket,buffer,1024);
printf("client: %s\n",buffer);
//send response to client
send(new_socket,hello,strlen(hello),0);
printf("Hello Anjali message sent\n");
close(new_socket);
return 0;
}

