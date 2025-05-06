#include<stdio.h>
#pragma pack(1)
struct A{
	char c;
	int i;
};
int main(){
//printf("size of structure variable is :%lu",sizeof(struct A)); // due to sturture padding it is 8 bytes
printf("size of structure variable is :%lu",sizeof(struct A));				// after apply structure packing
}
