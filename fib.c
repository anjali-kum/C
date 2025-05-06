#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fib(int num, int first, int second, int third){
	if(num){
		third = first+second;
		printf("%d ",third);
		first = second;
		second = third;
	
	return fib(num-1, first,second,third);
	}
}
int main(){
	int num ;
	printf("Enter the number: ");
	scanf("%d",&num);
	printf("%d %d ",0,1);
	//printf("%d",fib(num-2,0,1,0));
	fib(num-2, 0,1,0);
	return 0;
	}

