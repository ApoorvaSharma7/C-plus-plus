// Reverse a number

#include<iostream>
using namespace std;
int main(){
    int n,temp,rev=0;
    cout<<"enter number : ";
    cin>>n;
    for(;n>0;n=n/10){
        temp=n%10;
        rev=temp+rev*10;
        
    }
    cout<<rev<<endl;
}