#include<stdio.h>
#include<stdlib.h>

void main(void){
	int *p = NULL;
	p = (int*)calloc(10,sizeof(int));
	if(p==NULL){
		printf("\nfailed to allocate memory");
		exit(1);
	}
	for(int i=0;i<10;i++){
		p[i] = i;
	}
	for(int i=0;i<10;i++){
		printf("\nPointer to int[%d] = (%d)",i,p[i]);
	}
	free(p);
}

