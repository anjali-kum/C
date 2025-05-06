/*****************Dangling Pointer: When pointer pointing to deallocated memory block than pointer becomes dangling , its called as dangling pointer.ex.:*/

#include<stdio.h>
int *func(){
	int num =10;
	return &num;
}
int main(){
	int *ptr = NULL;
	ptr = func();
	printf("%d",*ptr);
	return 0;
}

