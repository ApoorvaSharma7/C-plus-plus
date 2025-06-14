// Check if a number is palindrome (e.g., 121)

#include<iostream>
using namespace std;
int main(){
    int n,i,original,rev=0,temp;
    cout<<"enter a number : ";
    cin>>n;
    original=n;
    for(;n!=0;n=n/10){
        temp=n%10;
        rev=temp+rev*10;
    }
    if(original==rev){
        cout<<"palindrom";
    }
    else{
        cout<<"not palindrom";
    }
}