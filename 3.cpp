// 3. Temperature Converter
// Problem:
// Input temperature in Celsius, convert it to Fahrenheit using the formula:
// F = (C * 9/5) + 32
// Display both values using float and int using typecasting.

// Concepts Used: Typecasting, arithmetic operators, float/int

#include<iostream>
using namespace std;
int main(){
    float temp,far;
    cout<< "enter temperature in celsius"<<endl;
    cin>>temp;
    far=(temp*9/5)+32;
    int newfar=(int)far;
    cout<<"exact tempurature in farenheit = "<<far<<endl;
    cout<<"aprox tempurature in farenheit = "<<newfar<<endl;
    return 0;
}