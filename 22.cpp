// Print pattern of numbers (e.g., Floyd’s Triangle)

#include<iostream>
using namespace std;
int main(){
    int n,i,j,number=1;
    cout<<"enter number ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<number<<" ";
            number++;
        }
        cout<<endl;
    }
}