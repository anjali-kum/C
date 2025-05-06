#include<stdio.h>
#include<signal.h>
#include<string.h>
#include<unistd.h>

void sigHandler(int sigNo)
{
	printf("This is signal Handler\n");
	int i=0;
	for(i=0;i<60;++i)
	{
		printf("waiting for sighandler to complete\n");
		sleep(1);
	}
printf("Continuing to execute the main program\n");

}
void main()
{
	struct sigaction act;
	sigset_t mask;
	memset(&act, 0,sizeof(act));
	sigemptyset(&mask);
	sigaddset(&mask,SIGALRM);
	act.sa_handler = sigHandler;
	act.sa_mask = mask;
	act.sa_flags = 0;

	sigaction(SIGINT,&act, NULL);
	while(1){

	printf("Executing main program\n");
	sleep(1);
}
}

