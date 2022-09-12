// Take two int values from user and print greatest among them.
#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter x= ";
    cin>>x;
    cout<<"Enter y= ";
    cin>>y;
    
    if(x>y){
        cout<<"x is greatest!!";
    }
    else{
        cout<<"y is greatest!!";
    }

    return 0;
}