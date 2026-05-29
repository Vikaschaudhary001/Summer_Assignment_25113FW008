#include<iostream>
using namespace std;
int main(){
    int n,d,temp,rev=0;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    temp=n;
    while(temp!=0){
        d=temp%10;
        rev=rev*10+d;
        temp=temp/10;
    }
    if(rev==n){
        cout<<n<<" is a palindrome number.";
    }
    else{
        cout<<n<<" is not a palindrome number.";
    }
    return 0;
}