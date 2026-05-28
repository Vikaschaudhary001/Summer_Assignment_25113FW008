#include<iostream>
using namespace std;
int main(){
    int n,digit=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    if(n>=0){
    while(n>0){
        n=n/10;
        digit++;  
        

    }
  }
  else if(n<0){
    while(n!=0){
      n=n/10;
      digit++;
    }

  }
    cout<<"the number of digits in the number is "<<digit<<endl;
    return 0;
}

