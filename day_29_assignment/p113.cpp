#include<iostream>
using namespace std;
int main(){
    int a,b,choice;
    cout<<":enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"\n1. addition";
    cout<<"\n2. subtraction";
    cout<<"\n3. multiplication";
    cout<<"\n4. division";
    cout<<"\n5. choice";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"sum="<<a+b;
        break;
           case 2:
        cout<<"difference="<<a-b;
        break;
           case 3:
        cout<<"multiplication="<<a*b;
        break;
           case 4:
           if(b!=0)
        cout<<"division="<<a/b;
        else 
        cout<<"division is not possible";
        break;
        default:
        cout<<"invalid choice";
    }
    return 0;
}

