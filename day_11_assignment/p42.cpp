#include<iostream>
using namespace std;
int maxx(int x,int y){
    if(x>y)
    return x;
    else 
    return y;
}
int main(){
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"the bigger number is"<<maxx(a,b);
}