#include<stdio.h>
int fun(int a,int b){
	a =10;
	b=20;
}
int main()
{
	int a = 10,b=20;
	fun(a,b);
	printf("a=%d, y=%d",a,b);
	return 0;
}

