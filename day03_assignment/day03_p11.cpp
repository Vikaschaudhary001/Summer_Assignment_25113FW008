#include<iostream>
using namespace std;
int main(){
int a,b,i,gcd;
cout<<"enter two numbers "<<endl;
cin>>a>>b;
for(i=1;i<=a && i<=b;i++){
    if(a%i==0 && b%i==0){
        gcd=i;
    }
}
cout<<"gcd of "<<a<<" and "<<b<<" is "<<gcd<<endl;
return 0;
}