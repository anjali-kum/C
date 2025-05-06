#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>

int main(){
	const char *fifo = "/tmp/myfifo";
	char buffer[100];
	int fd = open(fifo,O_RDONLY);
	read(fd,buffer,sizeof(buffer));
	printf("Reader got: %s\n",buffer);
	close(fd);

	return 0;
}

