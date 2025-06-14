// Check whether a given number is an Armstrong number.

#include<iostream>
using namespace std;
void armstrong(int num){
    int i,org,sum=0,temp;
    org=num;
    for(;num!=0;num=num/10){
        temp=num%10;
        sum+=temp*temp*temp;
    }
    if(org==sum){
        cout<<"it is an armstrong number";
    }else{
        cout<<"it is not an armstrong number";
    }
}
int main(){
    int n;
    cout<<"enter number ";
    cin>>n;
    armstrong(n);
}