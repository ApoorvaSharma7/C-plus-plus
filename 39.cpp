// Write a recursive function to calculate the factorial of a number.

#include<iostream>
using namespace std;
int factorial(int num){
    int i,fact=1;
    for(i=num;i>=1;i--){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"enter number ";
    cin>>n;
    cout<<factorial(n);
}