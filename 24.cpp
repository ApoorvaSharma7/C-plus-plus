// Find LCM of two numbers using loop

#include<iostream>
using namespace std;
int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main(){
    int a,b;
    cout<<"enter 2 numbers : ";
    cin>>a>>b;
    cout<<"LCM IS : "<<lcm(a,b)<<endl;
}