/************Check wheather a number is palindrome or not.
 */
#include<stdio.h>
void check_palindrome(int n){
	int org = n;
	int rev = 0;
while(org != 0){
rev = rev *10 +org %10;
org = org /10;
}
if(rev == n){
	printf("%d is palindrome\n",n);
}
else{
	printf("%d is not a palindrome\n",n);
}
}

int main(){
	int n = 13431;
	int m = 12345;

	check_palindrome(n);
	check_palindrome(m);
	return 0;
}

