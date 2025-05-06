/******Reverse string in c***********/
#include<stdio.h>
#include<string.h>
void reverse_str(char *str){
	int length = strlen(str);
	for(int i=0;i<length/2;i++){
		char temp = str[i];
		str[i] = str[length -1 -i];
		str[length-1-i] = temp;
	}
}
int main(){
	char str[] = "Hello, world!";
	reverse_str(str);
	printf("Reversed String: %s\n",str);
	return 0;
}

