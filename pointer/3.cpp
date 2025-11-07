#include <iostream>
using namespace std;

void cetakArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int data[3] = {10, 20, 30};
    cetakArray(data, 3);
    return 0;
}
