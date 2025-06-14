// Check for perfect number (sum of divisors = number)

#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"enter number ";
    cin>>n;
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<"it is perfect number "<<sum;
    }
    else{
        cout<<"it is not a perfect number"<<sum;
    }
}