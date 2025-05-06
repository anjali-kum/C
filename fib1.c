#include<stdio.h>
#include<stdlib.h>
int main(){
	int num ;
	printf("Enter the number");
	scanf("%d",&num);
	int first=0,second=1,third=0;
	printf("%d %d ", 0, 1);
	for(int i=2;i<num;i++){
		third = first+ second;
		printf("%d ",third);
		first = second;
		second = third;

	}
	return 0;
}

