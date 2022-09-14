// Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and then using following rules print their place of service.
// if employee is female, then she will work only in urban areas.

// if employee is a male and age is in between 20 to 40 then he may work in anywhere

// if employee is male and age is in between 40 t0 60 then he will work in urban areas only.

// And any other input of age should print "ERROR".

#include<iostream>
using namespace std;

int main(){
    int age;
    char sex,marital_status;

    cout<<"Enter your age= ";
    cin>>age;
    cout<<"Enter your sex(M/F)= ";
    cin>>sex;
    cout<<"Enter your marital status(Y/N)= ";
    cin>>marital_status;

    if(sex== 'F'){
        cout<<"Place of service is Urban areas.";
    }
    else if(sex== 'M' && (age>20 && age<40)){
        cout<<"Place of service is anywhere.";
    }
    else if(sex== 'M' && (age>40 && age<60)){
        cout<<"Place of service is in Urban areas only.";
    }
    else if(age>60){
        cout<<"ERROR";
    }
    else{
        cout<<"Invalid Input.";
    }
    return 0;
}