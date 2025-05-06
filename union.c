#include <stdio.h>

union Data {
    int i;
    int f;
};

int main() {
    union Data data;
    data.i = 10;
    printf("data.i : %d\n", data.i);

    data.f = 220;
    printf("data.f : %d\n", data.f);  // overwrites data.i

    return 0;
}

