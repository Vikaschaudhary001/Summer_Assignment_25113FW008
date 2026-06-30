#include<iostream>
using namespace std;
int main(){
    int ans,score=0;
    cout<<"Q1.capital of india?\n";
    cout<<"1.delhi\n2.mumbai\n3.kolkata\n";
    cin>>ans;
    if(ans==1)
    score++;
    cout<<"Q2.5+3=?\n";
    cout<<"1.6\n2.8\n3.9\n";
    cin>>ans;
    if (ans==2)
    score++;
    cout<<"your score="<<score<<"/2";
    return 0;
}