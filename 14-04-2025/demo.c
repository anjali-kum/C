#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 long long unsigned int fact( unsigned int num){
	 if(num == 0 | num == 1){
		 return 1;}
	 return num * fact(num-1);
 }
int main(){
	int num ;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("factorial of number is :%lld", fact(num));
	return 0;
}

