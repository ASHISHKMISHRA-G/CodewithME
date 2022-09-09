#include<iostream>
using namespace std;

// programs for Use of operators
// Length and breadth of a rectangle are 5 and 7 respectively. Write a program to calculate the area and perimeter of the rectangle
int main(){
    int l=5;
    int b=7;
    int area=0;  // l= lenght , b= breadth
    int perimeter=0;

    area=l*b;
    perimeter=2*(l+b);

    cout<<"Rectangle measurements";
    cout<<"\nArea of the Rectangle= "<<area;
    cout<<"\nPerimeter of the Rectangle= "<<perimeter;
    
    return 0;
    }









