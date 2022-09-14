// Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter any character= ";
    cin>>ch;
    
    if(ch>='a' && ch<='z'){
        cout<<"lowercase";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"Upercase";
    }
    else{
        cout<<"not an alphabet";
    }

    return 0;
}