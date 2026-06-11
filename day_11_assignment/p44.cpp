#include<iostream>
using namespace std;
void factorial(int n){
  if(n<0){
    cout<<"factorial of negative number is not defined";
  }
  else if(n==0){
cout<<"1" ;
  }
  else{
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"the factorial of "<<n<<" is "<<fact;
}
}
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
   factorial(n);
    return 0;
}