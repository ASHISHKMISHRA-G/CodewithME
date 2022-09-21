// Take 10 integers from keyboard using loop and print their average value on the screen.
#include<iostream>
using namespace std;

int main(){
    float sum=0;
    for(int i=0;i<10;i++){
        int x;
        cout<<"enter x= ";
        cin>>x;
        sum= sum+x;
    }
    cout<<"avg= "<<sum/10;
    return 0;
}