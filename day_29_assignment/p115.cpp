#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int choice;
    cout<<"enter a string ";
    cin>>str;
    cout<<"\n1. display";
cout<<"\n2. length";
cout<<"\n enter choice:";
cin>>choice;
switch(choice){
    case 1:
    cout<<"string ="<<str;
    break;
        case 2:
    cout<<"length ="<<str.length();
    break;
    default:
    cout<<"invalid choice";
}
return 0;
}