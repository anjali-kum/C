#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	int *ptr = NULL;
	ptr = (int*)calloc(num,sizeof(int));
		if(ptr == NULL){
			printf("\nFailed to allocate memory");
			exit(1);
		}
	for(int i=0;i<num;i++){
		ptr[i] = i;
	}
	for(int i=0;i<num;i++){
		printf("pint[%d] = %d\n",i,ptr[i]);
	}
	return 0;
}

