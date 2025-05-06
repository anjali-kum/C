#include<stdio.h>
struct {
unsigned int flag1 : 1;
unsigned int flag2 : 1;
unsigned int reserved : 6;
} flags;

int main(){
 flags.flag1 = 10;
 printf("%d",flags.flag1);
 return 0;
}
