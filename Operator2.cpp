//Write a program to input the value of the radius of a circle from keyboard and then calculate its perimeter and area.
#include<iostream>
using namespace std;

int main(){
    int r;
    int perimeter=0;
    int area=0;

    cout<<"Enter the radius of the circle= ";
    cin>>r;

    perimeter=2* 3.14 *r;
    area=3.14 *r*r;

    cout<<"Perimeter of the circle= "<<perimeter;
    cout<<"\nArea of the circle= "<<area;

    return 0;
}