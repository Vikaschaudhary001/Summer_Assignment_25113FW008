#include<iostream>
using namespace std;
int main (){
    int roll[3];
    string name[3];
    for(int i=0;i<3;i++){
        cout<<"enter rhe roll and name";
        cin>>roll[i]>>name[i];
    }
    cout<<"\nstudent records\n";
    for(int i=0;i<3;i++){
        cout<<roll[i]<<" "<<name[i]<<endl;
    }
    return 0;
}