#include<stdio.h>
int fun(int *ptr1, int*ptr2){
	*ptr1 = 20;
	*ptr2 = 10;
}
int main(){
	int x =10, y=20;
	fun(&x,&y);
	printf("x =%d, y=%d",x,y);
}

