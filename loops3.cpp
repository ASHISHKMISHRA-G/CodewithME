/*
Print the following patterns using loop :
a.
*
**
***
****
b.
   *  
 *** 
*****
 *** 
   *  
c.
1010101
 10101 
  101  
   1   
*/


// #include<iostream>
// using namespace std;
/*
int main(){
    int row;
    cout<<"Enter no. of rows= ";
    cin>>row;

    for(int i=0;i<=row;i++)
    {
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }

    return 0;
}

*/

// int main(){
//     int row;
//     cout<<"Enter no. or rows= ";
//     cin>>row;

//     for(int i=0;i<=row;i++){
//         for(int space=0;space=row-i-2;space++){
//             cout<<" ";

//         }
//         for(int j=0;j)
//     }
// }



#include<iostream>
using namespace std;

class Bank{
    private:
    int Acc_no;
    char name[30];
    long balance;
    
    public:
    void openAcc(){
        cout<<"enter acc no.= ";
        cin>>Acc_no;
        
        cout<<" enter name= ";
        cin>>name;
        
        cout<<"enter balance= ";
        cin>>balance;
    }
    
    void showacc(){
        cout<<"Account no= "<<Acc_no<<endl;
        cout<<"name= "<<name;
        cout<<"balance= "<<balance;
    }
    
    void deposit(){
        long amt;
        cout<<"enter amt to deposit= ";
        cin>>amt;
        balance=balance+amt;
    }
    
    void withdraw(){
        long amt;
        cout<<"enter amount= ";
        cin>>amt;
        if(amt<=balance){
            balance=balance-amt;
        }
        else{
            cout<<"less balance"<<endl;
        }
        
    }
    int search(int);
};

int Bank::search(int a){
    if(Acc_no==a){
        showacc();
        return(1);
    }
    return(0);
}

int main(){
    Bank b[3];
    int found=0,a,ch,i;
    for(i=0;i<=2;i++){
        b[i].openAcc();
    }
    
    do{
        cout<<"\n\n1.display all\n2.acc no\n3.deposit\n4.withdraw\n5.exit"<<endl;
        
        cout<<"enter yoyr choice= ";
        cin>>ch;
        
        switch(ch){
            case 1: for(i=0;i<=2;i++){
                b[i].showacc();
            }
            break;
            
            case 2:
                    cout<<"enter acc no= ";
                    cin>>a;
                    for(i=0;i<=2;i++){
                        found=b[i].search(a);
                        if(found){
                            b[i].showacc();
                            break;
                        }
                    }
                    if(!found){
                            cout<<"record not found"<<endl;
                    }
                    break;

            case 3: cout<<"acc no to deposit= ";
                    cin>>a;
                    for(i=0;i<=2;i++){
                        found=b[i].search(a);
                        if(found){
                            b[i].deposit();
                            break;
                        }
                    }
                    if(!found){
                        cout<<"record not found"<<endl;
                    }
                    break;
                    
            case 4: cout<<"acc no to withdraw= ";
                    cin>>a;
                    for(i=0;i<=2;i++){
                        found=b[i].search(a);
                        if(found){
                            b[i].withdraw();
                            break;
                        }
                    }
                    if(!found){
                        cout<<"record not found"<<endl;
                    }
                    break;
                    
            case 5: cout<<"have a nice day"<<endl;
                    break;
                    
            default:
                    cout<<"wrong option"<<endl;
                    
        }
    }
    while(ch!=5);
    return 0;
}
