#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;
    int **pp = &p;

    printf("Value of x: %d %p\n", **pp,pp);
    printf("Value of p: %d %p\n",*p,p);
    printf("Value of x: %d %p\n",x,x);
    return 0;
}

