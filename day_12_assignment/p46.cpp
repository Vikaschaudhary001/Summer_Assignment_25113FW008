#include <iostream>
using namespace std;
void armstrong (int n){
    int temp,d,sum=0;
    temp=n;
    while(n>0){
    d=n%10;
    sum=sum +(d*d*d);
    n=n/10;
    }
    if(sum==temp){
     cout<<"given number is armstrong number"<<endl;
    }
    else{
    cout<<"given number is not armstrong number"<<endl;
    }
 } 
 int main(){
     int a,result;
     cout<<"enter the number"<<endl;
     cin>>a;
   armstrong (a);
     return 0;
 }