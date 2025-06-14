// Q: Write a function that checks whether a number is even or odd.

#include<iostream>
using namespace std;
void check(int num){
    if(num%2==0){
        cout<<num<<" is even "<<endl;
    }else{
        cout<<num<<" is odd"<<endl;
    }
}
int main(){
    int a;
    cout<<"enter number ";
    cin>>a;
    check(a);
}