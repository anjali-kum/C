#include<stdlib.h>
#include<stdio.h>
int main(){
	int *ptr=NULL;
	ptr = (int*)malloc(10*sizeof(int));
	if(ptr == NULL){
		printf("Failed to allocate memory");
	}
	for(int i=0;i<10;i++){
		ptr[i] = i;
	}
	for(int i=0;i<10;i++){
		printf("%d  %d\n", ptr[i], i);
	}
	free(ptr);
	return 0;
}

