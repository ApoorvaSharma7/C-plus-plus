// Check whether a quadratic equation has real roots, equal roots, or imaginary roots.

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c,D;
    cout<<"enter coefficient a,b,c ";
    cin>>a>>b>>c;
    D=b*b-4*a*c;
    if(D>0){
        cout<<"roota are real and distinct"<<endl;
    }
    else if(D==0){
        cout<<"roots are real and equal"<<endl;
    }
    else{
        cout<<"roots are imaginary"<<endl;
    }
    return 0;
}