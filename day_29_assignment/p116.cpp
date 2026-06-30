#include<iostream>
using namespace std;
struct item{
    int id;
    string name ;
    int quantity;
};
int main(){
    item i;
    cout<<"enter item id: ";
    cin>>i.id;
      cout<<"enter item name: ";
    cin>>i.name;
      cout<<"enter quantity: ";
    cin>>i.quantity;
      cout<<"\n inventory details\n ";
      cout<<"enter item id: "<<i.id<<endl;
        cout<<" item name"<<i.name<<endl;
cout<<"quantity: "<<i.quantity<<endl;
return 0;  
}