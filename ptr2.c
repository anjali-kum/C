#include<stdio.h>
int main(){
	int a[] = {11,22,36,5,2};
	int *p = a;
	printf("%d",*(++p));
	return 0;
}

