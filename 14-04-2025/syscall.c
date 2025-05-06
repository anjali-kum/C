#include<stdio.h>
#include<unistd.h>
#include<string.h>
int main(){
	size_t length;
	int lenString;
	char buf[100];
	strncpy(buf,"Hello! I am printed through the use of a system call. ", 99);
	lenString = strlen(buf);
	length = write(1,buf,lenString);
	return 0;
}

