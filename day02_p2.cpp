#include<iostream>
using namespace std;
int main(){
    int n,rev=0,d;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(n!=0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;

    }
    cout<<"the reverse of the number is "<<rev<<endl;
    return 0;
}