#include<iostream>
using namespace std;
int main(){
int a[5],i,choice,sum=0;
cout<<"enter 5 element"<<endl;
for(i=0;i<5;i++)
cin>>a[i];
cout<<"\n1. display";
cout<<"\n2. sum";
cout<<"\n enter choice:";
cin>>choice;
switch(choice){
    case 1:
    cout<<"array elements ";
    for(i=0;i<5;i++)
cout<<a[i]<<" ";
break;
    case 2:

    for(i=0;i<5;i++)
        sum+=a[i];
cout<< "sum"<<" "<<sum;
break;
    
    default:
    cout<<"invalid choice";
}
return 0;
}