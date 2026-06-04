#include<iostream>
using namespace std;
int main(){
    int n,f1,f2,f3;
    cout<<"how many terms you want to print?"<<endl;
    cin>>n;
    f1=0;
    f2=1;
    cout<<"fibonacci series is:"<<endl;
    cout<<f1<<endl;
    cout<<f2<<endl;
    for(int i=3;i<=n;i++){
        f3=f1+f2;
        cout<<f3<<endl;
        f1=f2;
        f2=f3;
    }
    return 0;
}