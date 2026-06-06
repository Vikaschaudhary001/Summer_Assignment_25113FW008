#include<iostream>
using namespace std;
int main(){
    int n,binary=0,d=1;
    cout<<"enter a number"<<endl;
    cin>>n;
if(n==0){
    cout<<0;
    return 0;

}
while (n>0){
    int rem=n%2;
    binary=binary+rem*d;
    d=d*10;
    n=n/2;
}
cout<<binary;
return 0;
}