#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int *p = NULL;
	p = (int*)malloc(n*sizeof(int));
	if(p == NULL){
		printf("\nError unable to allocate memory");
		exit(1);
	}
	for(int i=0;i<n;i++){
		p[i] = i;
	}
	for(int i=0;i<10;i++){
		printf("pint[%d]= %d\n",i,p[i]);
	}
	return 0;
}

