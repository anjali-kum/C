#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int x = 10;
int main(){
	int status;
	int id = fork();
	if(id == 0)
	{
		x = 20;
		printf("Child process\n");
		exit(5);
	}
	wait(&status);
	printf("%d\n",WEXITSTATUS(status));
	printf("%d ",x);
}
	

