// Print a reverse number pattern

#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter rows ";
    cin>>n;
    for(i=n;i>0;i--){
        for(j=i;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}