// 1. Simple Calculator
// Problem:
// Write a C++ program to input two integers and display their sum, difference, product, and quotient.

// Concepts Used: Variables, arithmetic operators.

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter 1st no."<<endl;
    cin>>a;
    cout<<"enter 2nd no."<<endl;
    cin>>b;
    cout<<"sum "<<(a+b)<<endl;
    cout<<"difference "<<(a-b)<<endl;
    cout<<"product "<<(a*b)<<endl;
    cout<<"quotient "<<(a/b)<<endl;
    return 0;
}