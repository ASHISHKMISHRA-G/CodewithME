//Write a program to enter the values of two variables 'a' and 'b' from keyboard and then check if both the conditions 'a < 50' and 'a < b' 
//are true.

#include<iostream>
using namespace std;

int main(){
    int a,b;
    
    cout<<"Enter a= ";
    cin>>a;
    cout<<"Enter b= ";
    cin>>b;

    if(a<50 && a<b){
        cout<<"True!!";
    }
    else{
        cout<<"not true!!";
    }

    return 0;
}