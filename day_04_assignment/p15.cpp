#include<iostream>
using namespace std;
int main(){
  int  n,temp,d,sum=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    temp=n;
    while(temp>0){
        d=temp%10;
        sum=sum+(d*d*d);
        temp=temp/10;
    }
    if(sum==n){
        cout<<"armstrong number"<<endl;
    }
    else{
        cout<<"not armstrong number"<<endl;
    }
return 0;
}
    