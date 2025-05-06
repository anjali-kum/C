#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int func1(char *data){
	printf("function 1:>%s\n",data);
}
int func2(char *data){
	printf("function 2: >%s\n",data);
}
int func3(char *data){
	printf("function 3: >%s\n",data);
}
int func4(char *data){
	printf("function 4: >%s\n",data);
}
int main(){
	char data[50] = "hello from anjali";
	int (*func_ptr[4])(char*);
	func_ptr[0] = func1;
	func_ptr[1] = func2;
	func_ptr[2] = func3;
	func_ptr[3] = func4;
	printf("main :>%s\n",data);
	for(int i=0;i<4;i++){
		(*func_ptr[i])(data);
	}
}

