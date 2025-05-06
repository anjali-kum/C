/**************Count number of set bits in number*********/

#include<stdio.h>
#include<string.h>

int countsetbits(int num){
	int count =0;
	while(num ){
		count += num & 1;
		num >>= 1;
	}
	return count;
}
int main(){
	int num ;
	printf("Enter the decimal number: ");
	scanf("%d",&num);
	printf("Number of set bits: %d",countsetbits(num));
	return 0;
}

