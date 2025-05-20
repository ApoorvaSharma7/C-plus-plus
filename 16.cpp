// Print all alphabets (A-Z or a-z)

#include<iostream>
using namespace std;

int main() {
    // Print uppercase letters A to Z
    cout << "Uppercase letters (A–Z):" << endl;
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        cout << ch << " ";
    }

    cout << "\n\nLowercase letters (a–z):" << endl;

    // Print lowercase letters a to z
    for (char ch = 'a'; ch <= 'z'; ch++) {
        cout << ch << " ";
    }

    cout << endl;
    return 0;
}
