#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter the string"<<endl;
    getline(cin,str);
    int vowel=0,consonants=0;
    for(char ch:str){
        if((ch>='A'&&ch<='z')||(ch>='a'&&ch<='z')){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            vowel++;
            else 
            consonants++;
        }
        
    }
    cout<<"vowel="<<vowel<<endl;
    cout<<"consonants="<<consonants;
    return 0;
}