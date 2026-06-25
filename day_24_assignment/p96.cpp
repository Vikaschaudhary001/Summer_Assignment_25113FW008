#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter the string"<<endl;
    cin>>s;
    string result ="";
    for(char ch:s){
        if(result.find(ch)==string::npos)
        result+=ch;
    }
    cout<<result;
    return 0;
}
