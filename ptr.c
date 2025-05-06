#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[5] ;
	*(a+2) = 30;
	printf("%d",a[2]);
	return 0;
}

