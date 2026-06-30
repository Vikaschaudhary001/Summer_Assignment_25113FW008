#include<iostream>
using namespace std;
int main(){
    int choice;
    float balance=10000,amount;
    cout<<"1.check balance \n";
    cout<<" 2.deposit \n";
     cout<<" 3.withdraw \n";
      cout<<"enter your choice\n";
      cin>>choice;
      switch(choice){
        case 1:
        cout<<"balance="<<balance;
        break;
        case 2:
        cout<<"enter deposite amount";
        cin>>amount;
balance +=amount;
cout<<"updated balance="<<balance;
break;
case 3:
cout<<"enter withdraw amount";
cin>>amount;
if(amount<=balance){
    balance-=balance;
    cout<<"updated balance= "<<balance;
}
else {
    cout<<"insufficient balance ";
}
break;
default:
cout<<"invalid choice";
      }
      return 0;
    }

