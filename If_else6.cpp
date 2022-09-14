// Take input of age of 3 people by user and determine oldest and youngest among them.


#include<iostream>
using namespace std;

int main(){
    int age1,age2,age3;

    cout<<"Enter age1= ";
    cin>>age1;
    cout<<"Enter age2= ";
    cin>>age2;
    cout<<"Enter age3= ";
    cin>>age3;
    // cout<<"Enter age of 3 people= ";
    // cin>>age1>>age2>>age3;

    if(age1>age2){
        if(age1>age3){
            cout<<"age1 is oldest.\n";
        }
        else{
            cout<<"age3 is oldest.\n";
        }
    }
    else{
        if(age2>age3){
            cout<<"age2 is oldest.\n";
        }
        else{
            cout<<"age3 is oldest.\n";
        }
    }

    if(age1<age2){
        if(age1<age3){
            cout<<"age1 is youngest.\n";
        }
        else{
            cout<<"age3 is youngest.\n";
        }
    }
    else{
        if(age2<age3){
            cout<<"age2 is youngest.\n";
        }
        else{
            cout<<"age3 is youngest.\n";
        }
    }
    
    return 0;
 }

 

