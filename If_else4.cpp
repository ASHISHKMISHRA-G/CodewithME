// A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
// Ask user for their salary and year of service and print the net bonus amount.

#include<iostream>
using namespace std;

int main(){
    int salary,years_of_service;

    cout<<"Enter your salary= ";
    cin>>salary;

    cout<<"Enter your year of service= ";
    cin>>years_of_service;

    if(years_of_service>5){
        cout<<"Net Bonus Amount= "<<(salary+(salary*5/100));
    }
    else{
        cout<<"No Bonus applied!!";
    }

    return 0;
}