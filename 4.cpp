// 5. Gross Salary Analyzer
// Problem:
// Input basic salary of an employee.
// Calculate HRA = 20% of basic, DA = 50% of basic, Gross Salary = Basic + HRA + DA.

// Display gross salary as float and int.

// Use relational operators to display salary slab (e.g., high, average, low).

#include <iostream>
using namespace std;

int main() {
    float basicSalary, hra, da, grossSalary;
    int grossSalaryInt;

    // Input basic salary
    cout << "Enter the basic salary of the employee: ";
    cin >> basicSalary;

    // Calculate HRA and DA
    hra = 0.20 * basicSalary;
    da = 0.50 * basicSalary;

    // Calculate gross salary
    grossSalary = basicSalary + hra + da;

    // Typecast to int
    grossSalaryInt = (int)grossSalary;

    // Output salary in float and int
    cout << "\nGross Salary (float): " << grossSalary << endl;
    cout << "Gross Salary (int): " << grossSalaryInt << endl;

    // Display salary slab using relational operators
    if (grossSalary >= 80000) {
        cout << "Salary Slab: High Earner " << endl;
    } else if (grossSalary >= 40000) {
        cout << "Salary Slab: Average Earner " << endl;
    } else {
        cout << "Salary Slab: Low Earner " << endl;
    }

    return 0;
}
