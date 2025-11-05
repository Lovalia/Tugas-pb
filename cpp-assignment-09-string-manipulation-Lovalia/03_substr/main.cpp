#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Pemrograman C++";
    string potong = teks.substr(0, 11);
    cout << "Substr: " << potong << endl;
    return 0;
}
