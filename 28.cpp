// Generate Pascal’s Triangle using nested for loops

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Outer loop for rows
    for(int i = 0; i < n; i++) {
        // Print leading spaces for alignment
        for(int space = 0; space < n - i - 1; space++) {
            cout << "  ";
        }

        // Initialize the first value in a row
        int value = 1;

        // Inner loop for printing numbers
        for(int j = 0; j <= i; j++) {
            cout << value << "(i,j)"<<i<<" "<<j<<"   ";  // Print value with spaces
            // Update value using the formula:
            // value = value * (i - j) / (j + 1);
            value = value * (i - j) / (j + 1);
        }
        cout << endl;  // Move to the next row
    }

    return 0;
}
