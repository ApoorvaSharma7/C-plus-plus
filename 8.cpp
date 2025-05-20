// Implement a program to check whether a given triangle is valid or not based on angles.

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter angles ";
    cin>>a>>b>>c;
    if(a!=0 && b!=0 && c!=0){
        if(a+b+c==180){
            cout <<"it is triangle";
        }
    }
    else{
        cout<<"not triangle";
    }
}