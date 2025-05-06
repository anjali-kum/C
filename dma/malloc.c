#include<stdio.h>
#include<stdlib.h>

void main(void){
	int *p = NULL;
	p = (int*)malloc(10*sizeof(int));
	if(p == NULL){
		printf("\nSome error while allocating memory");
		exit(-1);
	}
	for(int x = 0;x<10;x++){
		p[x] = x;
	}
	for(int x = 0;x<10;x++){
		printf("\nPointer to int[%d] = (%d)",x,p[x]);
	}
	free(p);
}

