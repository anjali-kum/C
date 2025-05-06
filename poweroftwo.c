/****************Check if a given positive integer is a POWER of Two**/
#include<stdio.h>
int isPowerOfTwo(int n){
	return (n >0) && ( n & (n -1)) == 0;
}
int main(){
	int num ;
	printf("Enter the number:");
	scanf("%d",&num);
	if(isPowerOfTwo(num)){
		printf("%d is a power of two. \n",num);
	}
	else{
		printf("%d is not a power of two. \n",num);
	}
}

