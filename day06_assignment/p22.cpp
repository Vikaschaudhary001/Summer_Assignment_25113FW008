#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int decimal=0,base=1;
    long long n;
    cout<<"enter a number"<<endl;
cin>>n;
while(n>0){
    int last=n%10;
    decimal+=last*base;
    base*=2;
    n=n/10;
}
cout<<decimal;
return 0;


}
