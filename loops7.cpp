/*
Calculate the sum of digits of a number given by user. E.g.-
INUPT : 123        OUPUT : 6
INUPT : 12345        OUPUT : 15
*/

#include<iostream>
using namespace std;

int main(){
    label:
    int m,n,sum=0;
    cout<<"enter m= ";
    cin>>m;

    while(m>0){
            n=m%10;
            sum=sum+n;
            m=m/10;
    }
    cout<<"sum= "<<sum;
  
}