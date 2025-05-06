#include<stdio.h>

int main(int argc,char *argv[] ){
	int i;
	if(argc == 1){
		printf("Please provide command line argument!!");
		return 0;
	}
	else{
		printf("Total number of arguments are - %d and they are \n\n",argc);
		for(i=0;i<argc;i++){
			printf("%d --%s\n",i+1,argv[i]);
		}
		return 0;
	}
}

