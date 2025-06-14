// Print all prime numbers in a given range

#include<iostream>
using namespace std;
bool isprime(int num){
    if(num<=1){
        return false;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0)
            return false;
    }
    return true;
}
int main(){
    int low,high,i;
    cout<<"enter lower bound ";
    cin>>low;
    cout<<"enter higher bound ";
    cin>>high;
    cout<<"prime number are ";
    for(i=low;i<=high;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
}