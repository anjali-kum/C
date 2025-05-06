#include<stdio.h>
#include<stdlib.h>
void my_strcpy(char *dest, const char *src,size_t n){
	while(*src && n--)
		*dest++ = *src++;
		while(n--) *dest++ = '\0';
	}

	int main(){
		char str[] = "anjali";
		char str1[20];
		my_strcpy(str1,str,20);
		printf("Copied string is %s\n",str1);
		return 0;
	}

