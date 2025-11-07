#include <iostream>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;
    printf("Sebelum swap: a=%d, b=%d\n", a, b);

    swap(&a, &b);

    printf("Sesudah swap: a=%d, b=%d\n", a, b);
    return 0;
}
