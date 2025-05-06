
/**************Swap two variable using function*******/
#include<stdio.h>
#include<stdlib.h>
void main(){
	int a,b;
	printf("Enter the number a and b");
	scanf("%d %d",&a,&b);
	swap(a,b);
	//printf("a= %d and b= %d",a,b);
	
}
void swap(int a, int b){
	b= (a+b) -(a=b);
	printf("After swapping a:%d b:%d",a,b);
	//return a,b;
}


