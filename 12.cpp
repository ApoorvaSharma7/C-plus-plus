// Print the multiplication table of a given number

#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter number ";
    cin>>n;
    for(i=0;i<=10;i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
}