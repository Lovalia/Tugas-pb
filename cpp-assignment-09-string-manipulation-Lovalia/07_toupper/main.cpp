#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string teks = "Halo Dunia";
    for (char &c : teks) {
        c = toupper(c);
    }
    cout << "Uppercase: " << teks << endl;
    return 0;
}
