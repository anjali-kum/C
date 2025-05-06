#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int countsetbits(int num){
	int count=0;
	while(num){
		count += num & 1;
		num >>= 1;
	}
	return count;
}
int main(){
	int num ;
	printf("Enter number: ");
	scanf("%d",&num);
	int total = sizeof(num) *8;
	int unset = total - countsetbits(num);
        printf("%d",countsetbits(num));
	printf("%d",unset);
	return 0;
}

