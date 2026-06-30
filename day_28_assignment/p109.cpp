#include<iostream>
using namespace std;
int main(){
string book;
int choice;
cout<<"available book: c++ programin\n";
cout<<"1. issue book\n";
cout<<"1. return  book\n";
cout<<"enter choice:  ";
cin>>choice ;
if(choice==1)
cout<<"book issued succesfully";
else if (choice ==2)
cout<<"book returned succesfully. ";
else 
cout<<"invalid choice:";
return 0;
}