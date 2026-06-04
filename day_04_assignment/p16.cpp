#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter two numbers"<<endl;
    cin>>num1>>num2;
    for(int i=num1;i<=num2;i++){
        int n=i,d,sum=0;
        while(n>0){
            d=n%10;
            sum=sum+(d*d*d);
            n=n/10;
        }
        if(sum==i){
            cout<<i<<endl;
        }
    }
    return 0;
}