#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Halo Dunia";
    teks.replace(5, 5, "Semesta");
    cout << "Replace: " << teks << endl;
    return 0;
}
