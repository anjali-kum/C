#include<stdio.h>
int main(){
	int arr[] = {1,8,3,10,2};
	int max = arr[0];
	int n = sizeof(arr) / sizeof(arr[0]);

	for(int i=1;i<n;i++){
		if(arr[i] > max)
		
			max = arr[i];
	}
	printf("Largest element = %d\n",max);
	return 0;
}

