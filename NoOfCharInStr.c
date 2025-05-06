/********Count the Number of Characters  in a string********/

#include<stdio.h>
#include<string.h>
void countCharacters(char *str){
	int count[256] = {0};
	for(int i=0; str[i] != '\0';i++){
		count[str[i]]++;
	}
	for(int i=0;i<256;i++){
		if(count[i] > 0){
			printf("'%c' : %d\n",i, count[i]);
		}
	}

}
int main(){
	char str[] = "I am good at python";
	countCharacters(str);
	return 0;
}

