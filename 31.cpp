// Q: Write a function that returns the largest of three numbers.

#include<iostream>
using namespace std;
void check(int a,int b, int c){
    if(a>b && a>c){
        cout<<a<<" is largest";
    }else if(b>a && b>c){
        cout<<b<<" is largest";
    }else{
        cout<<c<<" is largest";
    }
}
int main(){
    int a,b,c;
    cout<<"enter numbers ";
    cin>>a>>b>>c;
    check(a,b,c);
}