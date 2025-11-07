#include <iostream>
using namespace std;
void ubahNilai(int *x) {
    *x = 100;  // ubah nilai variabel lewat pointer
}

int main() {
    int a = 10;
    printf("Sebelum: %d\n", a);

    ubahNilai(&a);  // kirim alamat a

    printf("Sesudah: %d\n", a);
    return 0;
}
