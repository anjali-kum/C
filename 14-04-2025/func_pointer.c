#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int func1(char *data){
	printf("fucnction 1: > %s\n",data);
}
int func2(char *data){
	printf("Function 2: >%s\n",data);
}
int main(){
	char data[50] = "hello from main";
	int(*func_ptr)(char *) = &func2;
	printf("main :>%s\n",data);
	func1(data);
	(*func_ptr)(data);
}

