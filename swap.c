/****Write a program in C to swap the values of two variables without using any extra variable.
 */

#include<stdio.h>
int main(){
	int x=20;
	int y=30;
	printf("%d %d\n",x,y);

	x = x+y;
	y = x-y;
	x= x-y;

	printf("x: %d, y:%d\n",x,y);
	return 0;
}

