#include<iostream>
using namespace std;
int fib(int n){
    int f1=0,f2=1,f3;
    cout<<"the fibonacci series is"<<endl;
cout<<f1<<endl<<f2<<endl;

    for(int i=1;i<=n;i++){
        f3=f1+f2;
        f1=f2;
        f2=f3;
  cout<<f3<<endl;

    }
}
    int main(){
        int n;
        cout<<"enter the number that you want to be fibonacci term"<<endl;
        cin>>n;
        fib(n);
        return 0;
    }
