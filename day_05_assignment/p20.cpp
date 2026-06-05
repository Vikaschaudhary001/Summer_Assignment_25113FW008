#include<iostream>
using namespace std;
int main(){
    int n,largest=1;
    cout<<"enter a positive number"<<endl;
    cin>>n;
    for(int i=2;i<=n;i++){
        while(n%i==0){
            largest=i;
            n=n/i;
        }
    }
    cout<<"the largest prime factor is "<<largest<<endl;
    return 0;
}
