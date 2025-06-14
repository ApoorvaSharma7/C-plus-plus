// Use the Euclidean algorithm to find the GCD of two numbers.

#include<iostream>
using namespace std;

// Function to find GCD using Euclidean algorithm
int findGCD(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b; // Remainder becomes new b
        a = temp;  // Old b becomes new a
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int gcd = findGCD(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;

    return 0;
}
