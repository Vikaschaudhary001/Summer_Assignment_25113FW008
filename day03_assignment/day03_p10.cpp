#include<iostream>
using namespace std;
int main(){
    int a,b,i,j,prime;
    cout<<"enter lower number"<<endl;
    cin>>a;
    cout<<"enter upper number"<<endl;
    cin>>b;
    cout<<"prime numbers between "<<a<<" and "<<b<<" are: "<<endl;
    for(i=a;i<=b;i++){
        if(i==1 || i==0)
            continue;
        prime=1;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime==1)
            cout<<i<<" ";
    }
    return 0;
}