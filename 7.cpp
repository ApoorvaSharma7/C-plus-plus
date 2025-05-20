// Check whether a character is uppercase, lowercase, digit, or special character.

#include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"enter character: ";
    cin>>n;
    if(n>='A' &&n<='Z'){
        cout<<"uppercase"<<endl;
    }
    else if(n>='a'&& n<='z'){
        cout<<"lowercase"<<endl;
    }
    else if(n>='0' && n<='9'){
        cout<<"digit"<<endl;
    }
    else{
        cout<<"special character"<<endl;
    }
    return 0;
}