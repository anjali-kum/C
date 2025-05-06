#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<string.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<signal.h>
#include<pthread.h>

void *fun(void *arg){
	printf("arg received is %d when converted to int \n",*((int*)arg));
}
void *fun1(void *arg){
	printf("arg received is %c when converted to char\n",*((char*)arg));
			}
void *fun2(void *arg){
printf("arg received is %f when converted to int \n",*((float*)arg));
}
int main(){

int val = 3123;
char x = 'A';
float pi = 3.14;

fun(&val);
fun1(&x);
fun2(&pi);
return 0;
}

