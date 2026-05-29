#include<iostream>
using namespace std;
int main(){
    int n,d,multiply=1;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(n!=0){
        d=n%10;
     multiply=multiply*d;
        n=n/10;
    }
    cout<<"the multiply of the digits is "<<multiply<<endl;
    return 0;
}
