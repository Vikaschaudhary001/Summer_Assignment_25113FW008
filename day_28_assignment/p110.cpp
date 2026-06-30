#include<iostream>
using namespace std;
int main(){
    string name ;
    int accNO;
    float balance,deposite,withdraw;
    cout<<"enter account number ";
    cin>>accNO;
     cout<<"enter name ";
    cin>>name;
     cout<<"enter balance ";
    cin>>balance;
     cout<<"enter deposite amount ";
    cin>>deposite;
    balance+=deposite;
    cout<<"enter withdraw amount";
    cin>>withdraw;
    if(withdraw<=balance) 
    balance-=withdraw;
    else 
    cout<<"insufficient balance\n";
    cout<<"\n final balance = "<<balance;
    return 0;
}