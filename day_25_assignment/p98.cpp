#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    cout<<"enter the first string"<<endl;
    cin>>s1;
     cout<<"enter the second string"<<endl;
     cin>>s2;
     for(char ch:s1){
        if(s2.find(ch)!=string ::npos)
        cout<<ch<<" ";
     }
     return 0;
}
