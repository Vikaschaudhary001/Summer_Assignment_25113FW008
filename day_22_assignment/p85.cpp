#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    string rev="";
    for(int i=str.length()-1;i>=0;i--)
        rev+=str[i];
        if(str==rev)
        cout<<"palindrome"<<endl;
        else 
        cout<<"not palindrome";
    
    return 0;
}