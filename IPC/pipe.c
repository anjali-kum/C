#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/wait.h>
int main(){
	int pipefd[2];
	pid_t pid;
	char buffer[100];

	if(pipe(pipefd) == -1){
		perror("pipe");
		return 1;
	}

	pid = fork();
	if(pid < 0){
		perror("fork");
		return 1;
	}
	if(pid  == 0){
		//child
		close(pipefd[1]);
		read(pipefd[0],buffer,sizeof(buffer));
		printf("Child received: %s\n",buffer);
		close(pipefd[0]);
	}
	else{
		//parent
		close(pipefd[0]);
		char msg[] = "Hello from parent!";
		write(pipefd[1], msg,strlen(msg) + 1);
		close(pipefd[1]);
		wait(NULL);
	}
	return 0;
}

