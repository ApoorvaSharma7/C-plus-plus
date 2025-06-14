// Print Fibonacci series up to N terms

#include<iostream>
using namespace std;
int main(){
    int n,i,first=0,second=1,temp;
    cout<<"enter number : ";
    cin>>n;
    cout<<first<<" "<<second<<" ";
    for(i=2;i<n;i++){
        temp=first;
        first=second;
        second=temp+first;
        cout<<second<<" ";
    }
}