#include<stdio.h>
int main(){
	int num;
	printf("Enter the number ");
	scanf("%d",&num);
	if(is_even(num)==0 ){ 
		printf("is odd %d",num);
	}else{
		printf("is even %d",num);
		}	
	return 0;
}
int is_even(int num){
	return !(num & 1);
}
