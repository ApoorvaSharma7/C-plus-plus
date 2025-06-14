// Check whether the input number is a palindrome (e.g., 121 is a palindrome).

#include<iostream>
using namespace std;
void palindrom(int num){
    int org ,rev=0,temp;
    org=num;
    for(;num!=0;num=num/10){
        temp=num%10;
        rev=temp+rev*10;

    }
    if(org==rev){
        cout<<"it is palindrom";
    }else{
        cout<<"not palindrom";
    }
}
int main(){
    int num;
    cout<<"enter number ";
    cin>>num;
    palindrom(num);
}