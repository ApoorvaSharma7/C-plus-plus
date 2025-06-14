// Q: Write a function that takes two integers and returns their sum.

#include<iostream>
using namespace std;
int sum(int a,int b){
    int add;
    add=a+b;
    return add;
}
int main(){
    int a,b;
    cout<<"enter numbers ";
    cin>>a>>b;
    cout<<"sum = "<<sum(a,b)<<endl;
}