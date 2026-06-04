#include<iostream>
using namespace std;
int main(){
    int n;
   cout<<"enter the value of n"<<endl;
    cin>>n;
    int f1=0,f2=1,f3;
    if(n==0){
        cout<<f1;
              
    }
    else if(n==1){
        cout<<f2;

    }
    else{
        for(int i=2;i<=n;i++){
        f3=f1+f2;
        f1=f2;
        f2=f3;
        }
        cout<<f2;
    }
return 0;

}