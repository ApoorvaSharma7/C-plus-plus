// Check if a given number is prime.

#include<iostream>
using namespace std;

void prime(int n){
    bool isprime=true;
    if(n<=1){
        isprime=false;
    }
    else{
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                isprime=false;
                break;
            }
        }
    }

    if(isprime){
        cout<<"is prime"<<endl;
    }else{
        cout<<"not prime"<<endl;
    }
}
int main(){
    int n;
    cout<<"enter number ";
    cin>>n;
    prime(n);

}