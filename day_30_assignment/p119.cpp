#include<iostream>
using namespace std;
struct employee{
    int id;
    string name;
    float salary;
} ;
int main(){
employee e[2];
for(int i=0;i<2;i++){
    cout<<"enter id name salary";
    cin>>e[i].id>>e[i].name>>e[i].salary;
    
}
cout<<"\n employee details \n";
for(int i=0;i<2;i++){
    cout<<e[i].id<<" "<<e[i].name<<" "<<e[i].salary<<endl;
}
return 0;
}