// Input a number N and print the first N terms of the Fibonacci series.

#include<iostream>
using namespace std;
void fib(int num){
    int first =0,second=1,next;
    cout<<first<<" ";
    cout<<second<<" ";
    for(int i=1;i<num;i++){
        next=first;
        first=second;
        second=first+next;
        cout<<second<<" ";
    }
}
int main(){
    int num;
    cout<<"enter number ";
    cin>>num;
    fib(num);
}