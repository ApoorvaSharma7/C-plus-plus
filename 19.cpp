// Check Armstrong number (e.g., 153 = 1³ + 5³ + 3³)

#include<iostream>
using namespace std;
int main(){
    int n,i,org,temp,cube=0;
    cout<<"enter number : ";
    cin>>n;
    org=n;
    for(;n!=0;n=n/10){
        temp=n%10;
        cube=cube+temp*temp*temp;
    }
    if(cube==org){
        cout<<"it is armstrong number "<<cube<<endl;
    }
    else{
        cout<<"it is not armstrong number "<<cube<<endl;
    }
}
