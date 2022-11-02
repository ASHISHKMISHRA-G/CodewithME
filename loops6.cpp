//c++ program to check the no. is Armstrong No. or not

#include <iostream>
using namespace std;
  
int main(){
    int number, sum = 0, lastDigit, temp;
    cout << "Enter a Number= ";
    cin >> number;
    temp = number;

    // Calculate sum of cube of every digit
    while(temp != 0){
        lastDigit = temp%10;
        sum = sum + (lastDigit*lastDigit*lastDigit);
        temp = temp/10;
    }
      
    if(sum == number){
        cout << number <<" is Armstrong Number";
    } else {
        cout << number <<" is not an Armstrong Number";
    }
     
    return 0;
}
