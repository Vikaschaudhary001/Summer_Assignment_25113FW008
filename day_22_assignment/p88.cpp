#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter the string"<<endl;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]!=' ')
        cout<<str[i];
    }
    return  0;
}