#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>

int main(){
	pid_t cpid;
	cpid = fork();
	if(cpid == -1)
		exit(-1);
	if(cpid == 0){
		printf("\nChild: Before exec\n");
		execl("./exec2","arg1","arg2",NULL);
		printf("\nChild: line is not printed\n");
	}
	else{
		printf("I am the Parent Program");
	}

	return 0;
}

