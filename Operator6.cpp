//If the marks of Robert in three subjects are 78,45 and 62 respectively (each out of 100 ), 
//write a program to calculate his total marks and percentage marks.

#include<iostream>
using namespace std;

int main(){
    cout<<"Marks obtainted in all three subjects are(out of 100)= 78  45  62";
    int total= 78+45+62;

    float percentage=(total/(300.0))*100;

    cout<<"\ntotal_marks= "<<total;
    cout<<"\npercentage= "<<percentage;
}