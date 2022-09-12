// Take values of length and breadth of a rectangle from user and check if it is square or not.

#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"enter length= ";
    cin>>l;
    cout<<"enter breadth= ";
    cin>>b;

    if(l==b){
        cout<<"Square!!";
    }
    else{
        cout<<"Rectangle!!";
    }
    return 0;
    
}