#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    char maxchar ;
    int maxcount=0;
    for(int i=0;i<str.length();i++){
        int count =0;
        for(int j=0;j<str.length();j++){
            if(str[i]==str[j])
            count++;
        }
        if(count>maxcount){
            maxcount=count;
            maxchar=str[i];
        }
    }
    cout<<"character ="<<maxchar<<endl;
    cout<<"frequency= "<<maxcount;
    return 0;
}