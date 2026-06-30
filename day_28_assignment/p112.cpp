#include<iostream>
using namespace std;
struct contact{
    string name;
    string phone;
};
int main(){
contact c;
cout<<"enter  name: ";
cin>>c.name;
cout<<"enter phone number: ";
cin>>c.phone;
cout<<"\ncontactdetails\n";
cout<<"name :"<<c.name<<endl;
cout<<"phone:"<<c.phone;
return 0;
}