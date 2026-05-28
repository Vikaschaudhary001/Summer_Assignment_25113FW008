#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout<<"the sum of first n natural numbers is "<<sum<<endl;
return 0;

}