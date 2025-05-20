// Write a program to check whether a number is positive or negative.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number \n";
    cin>>n;
    if(n>0){
        cout<<"positive\n";
    }
    else if(n<0){
        cout<<"negative\n";
    }
    else{
        cout<<"zero\n";
    }
    return 0;
}