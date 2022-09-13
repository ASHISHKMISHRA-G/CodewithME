// A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
// Ask user for quantity
// Suppose, one unit will cost 100.
// Judge and print total cost for user.

#include<iostream>
using namespace std;

int main(){
    int quantity,cost=0;

    cout<<"Enter purchased quantity(in units)= ";
    cin>>quantity;

    cost=(quantity*100);
    cout<<"cost= "<<cost;

    if(cost>1000){
        cout<<"\nDiscounted_amount= "<<cost*10/100;
    }
    else{
        cout<<"\nNot Discount Applied!!";
    }

    return 0;
}