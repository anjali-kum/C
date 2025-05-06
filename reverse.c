/************Program to reverse a number using iterative or recursion approach
 */
#include<stdio.h>
int reverse(int n){
	int ans=0;
	while(n !=0){
		ans = ans *10+(n % 10);
		n = n/10;
	}
	return ans;
}
// Using recursion function
int rev(int n, int ans)
{
	if(n == 0)
		return ans;
	ans = ans *10 + n%10;
	return rev(n/10, ans);
}

int main(){
	int n = 15942;
	printf("Initial number is:%d\n",n);
        n = reverse(n);
	printf("After reverse using iterative approach %d\n",n);
	int ans =0;
	ans = rev(n,ans);
	printf("%d after again reverse using recursion",ans);
	
return 0;
}



