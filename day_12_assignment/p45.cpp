#include<iostream>
using namespace std;
void palindrome(int n){
    int rev=0,d,temp;
    temp=n;
    while(n>0){
        d=n%10;
        rev= rev*10+d;
        n/=10;
    }
    if(temp==rev){
        cout<<"palindrome number";
    }
    else{
        cout<<"not palindrome number";
    }
}
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    palindrome(n);
    return 0;
}
