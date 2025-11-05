#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Halo Dunia";
    teks.erase(5, 5);
    cout << "Erase: " << teks << endl;
    return 0;
}
