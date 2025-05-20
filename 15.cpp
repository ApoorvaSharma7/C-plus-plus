// Count digits in a number

#include<iostream>
using namespace std;
int main(){
    int i,n,count=0;
    cout<<"enter number";
    cin>>n;
    for(;n>0;n=n/10){
        count++;
    }
    cout<<count<<endl;
}