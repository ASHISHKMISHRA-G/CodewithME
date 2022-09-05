#include<iostream>
#include<math.h>
using namespace std;

void power(){
    int n,m;
     long long  product=1;
 
    cout<<"\n\tEnter base number:";
    cin>>n;
    cout<<"\n\tEnter power:";
    cin>>m;
    
    for(int i=0;i<m;i++)
    {
        product=product*n;
    }
    
    cout<<"\n\t"<<n<<" raised to the power "<<m<<" is "<<product<<".";
}

void add(){
    int n,m;
    int sum=0;

    cout<<"\n\tEnter 1st number:";
    cin>>n;
    cout<<"\n\tEnter 2nd number:";
    cin>>m;

    sum=n+m;
    
    cout<<"\n\t"<<n<< " + " <<m << " = " <<sum;
}

void Sub(){
    int n,m;
    int Subtract=0;

    cout<<"\n\tEnter 1st number:";
    cin>>n;
    cout<<"\n\tEnter 2nd number:";
    cin>>m;

    Subtract=n-m;
    
    cout<<"\n\t"<<n<< " - " <<m << " = " <<Subtract;
}

void Multiply(){
    int n,m;
    int Product=0;

    cout<<"\n\tEnter 1st number:";
    cin>>n;
    cout<<"\n\tEnter 2nd number:";
    cin>>m;

    Product=n*m;
    
    cout<<"\n\t"<<n<< " * " <<m << " = " <<Product;
}

void Divide(){
    int n,m;
    int divide=0;

    cout<<"\n\tEnter 1st number:";
    cin>>n;
    cout<<"\n\tEnter 2nd number:";
    cin>>m;

    if(m==0){
        cout<<"\n\tUndefined";
        
    }
    else{

    divide=n/m;

    cout<<"\n\t"<<n<< " / " <<m << " = " <<divide;
    }
}

void Sqr_root(){
    int m;
    int Sqr_root=0;

    cout<<"\n\tEnter the no. whose sqaure root you want:";
    cin>>m;

    if(m<0){
        cout<<"Undefined";
        
    }
    else{

    Sqr_root= sqrt(m);
    
    cout<<"\n\tSquare Root of"<<m<< " = " <<Sqr_root;
    }
}

void Cube_root(){
    int m;
    int Cube_root=0;

    cout<<"\n\tEnter the no. whose cube root you want:";
    cin>>m;

    Cube_root= cbrt(m);
    
    cout<<"\n\tCube Root of"<<m<< " = " <<Cube_root;
}

void Sine(){
    int m;
    // float Sine=0;

    cout<<"\n\tEnter the no. whose sine value you want:";
    cin>>m;

    float Sine= sin(m);
    
    cout<<"\n\tSine of"<<m<< " = " <<Sine;
}

void Cos(){
    int m;
    // float Sine=0;

    cout<<"\n\tEnter the no. whose cos value you want:";
    cin>>m;

    float Cos= cos(m);
    
    cout<<"\n\tSine of"<<m<< " = " <<Cos;
}

void Tan(){
    int m;
    // float Sine=0;

    cout<<"\n\tEnter the no. whose Tan value you want:";
    cin>>m;

    if(m==90){
        cout<<"\n\tUndefined";
    }
    else{
        float Tan= tan(m);
    
        cout<<"\n\tTan of "<<m<< " = " <<Tan;
    }
}

void Log(){
    int m;

    cout<<"\n\tEnter the no. whose Log value you want:";
    cin>>m;

    if(m==0){
        cout<<"\n\tUndefined";
    }
    else{    
        double Log= log(m);  //natural log
    
        cout<<"\n\tLog of "<<m<< " = " <<Log;
    }
}


int main() {
    label:
int choice;
cout<<"\n\n\t\t-----------MENU----------";
cout<<"\n\n\t1.Power";
cout<<"\n\t2.Add";
cout<<"\n\t3.Subtract";
cout<<"\n\t4.Multiply";
cout<<"\n\t5.Divide";
cout<<"\n\t6.Square root";
cout<<"\n\t7.cube root";
cout<<"\n\t8.Sine";
cout<<"\n\t9.Cos";
cout<<"\n\t10.Tan";
cout<<"\n\t11.Log";



cout<<"\n\t15.Exit";
cout<<"\n\n\tEnter your choice:";

cin>>choice;
switch(choice){
    case 1:system("CLS");
        power();
        break;

    case 2:system("CLS");
        add();
        break;  

    case 3:system("CLS");
        Sub();
        break;

    case 4:system("CLS");
        Multiply();
        break; 

    case 5:system("CLS");
        Divide();
        break;

    case 6:system("CLS");
        Sqr_root();
        break;

    case 7:system("CLS");
        Cube_root();
        break;

    case 8:system("CLS");
        Sine();
        break; 

    case 9:system("CLS");
        Cos();
        break;

    case 10:system("CLS");
        Tan();
        break;

    case 11:system("CLS");
        Log();
        break;       

    case 12:cout<<"----THANK YOU FOR USING THE CALCULATOR-----";
           exit(0);
           break;

}
goto label;
 
}