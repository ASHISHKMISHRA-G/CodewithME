// A student will not be allowed to sit in exam if his/her attendence is less than 75%.
// Take following input from user
// Number of classes held
// Number of classes attended.
// And print
// percentage of class attended
// Is student is allowed to sit in exam or not.

#include<iostream>
using namespace std;

int main(){
    float no_ch,no_ca,percent;    //no_ch= no of classes held--------no_ca= no of classes attended
    cout<<"Enter total no. of classes held= ";
    cin>>no_ch;
    cout<<"Enter no. of classes you attented= ";
    cin>>no_ca;

    percent=no_ca/no_ch*100;
    cout<<"Percentage of classes attended= "<<percent<<"%\n";

    if(percent>=75){
        cout<<"You can give exams!!";
    }
    else{
        cout<<"You cannot sit in examsXX";
    }

    return 0;
}