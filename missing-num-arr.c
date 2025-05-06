#include<stdio.h>
void findMissingNumbers(int arr[], int size, int max_value){
	int total_sum = max_value * (max_value +1) / 2;
	int actual_sum =0;
	for(int i=0;i< size ;i++){
		actual_sum += arr[i] ;
	}
	int missing_sum = total_sum - actual_sum;
	printf("The sum of missing number is : %d \n",missing_sum);
}
int main(){
	int arr[] = {1,2,4,6,7,8,10};
	int size = sizeof(arr) / sizeof(arr[0]);
	int max_val = 10;
	findMissingNumbers(arr,size, max_val);
	return 0;
}

