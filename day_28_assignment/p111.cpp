#include<iostream>
using namespace std;
int main(){
    int seats,book;
    seats=50;
    cout<<"available seats: "<<seats<<endl;
    cout<<"enter number of seats to book: ";
     cin>>book;
     if(book<=seats){
        seats = seats-book;
        cout<<"booking succesful"<<endl;
        cout<<"remaining seats"<<seats<<endl;
        
     }
     else 
     cout<<"seats not available!";
     return 0;
}
