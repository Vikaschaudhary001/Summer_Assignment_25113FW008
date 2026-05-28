#include<iostream>
using namespace std;
int main(){
  int n,fact=1;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    if(n==0||n==1){
        cout<<"the factorial of "<<n<<" is 1"<<endl;
    }
  else if(n<0){
    cout<<"factorial of"<<n<<"is not defined"<<endl;
  }
  else if (n>1){
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    cout<<"the factorial of "<<n<<" is "<<fact<<endl;
  }
  return 0;
}