// Input a number and calculate the sum of its digits.

#include<iostream>
using namespace std;
int sum(int num){
    int temp,add=0;
    for(;num!=0;num=num/10){
        temp =num%10;
        add+=temp;
    }
    return add;
}
int main(){
    int num;
    cout<<"enter number ";
    cin>>num;
    cout<<sum(num);
}