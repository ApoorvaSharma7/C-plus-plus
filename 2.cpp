// 2. Area of a Circle
// Problem:
// Input the radius of a circle and display the area using the formula area = π * r * r. Use a float variable and typecast the final result to int as well.

// Concepts Used: Variables, typecasting, arithmetic operators.

#include<iostream>
using namespace std;
int main(){
    float r,pi,area;
    pi=3.14;
    cout<<"enter radius"<<endl;
    cin>>r;
    area=pi*r*r;
    int newarea= (int)area;
    cout<<"area= "<<newarea<<endl;
    return 0;
}