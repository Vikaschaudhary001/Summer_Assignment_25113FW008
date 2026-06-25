#include<iostream>
using namespace std;
int main(){
    string s1,s2;
cout<<"enter rhe strings"<<endl;
cin>>s1>>s2;
if(s1.length()==s2.length()&&(s1+s2).find(s2)!=string::npos)
cout<<"rotation"<<endl;
else
cout<<"not rotation";
return 0;
}