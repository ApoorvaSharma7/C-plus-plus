// Input a number and print its reverse.

#include<iostream>
using namespace std;
int reverse(int num){
    int temp,rev=0;
    for(;num!=0;num=num/10){
        temp =num%10;
        rev=temp+rev*10;
    }
    return rev;
}
int main(){
    int num;
    cout<<"enter number ";
    cin>>num;
    cout<<reverse(num);
}