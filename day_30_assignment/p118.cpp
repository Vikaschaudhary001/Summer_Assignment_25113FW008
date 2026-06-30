#include<iostream>
using namespace std;
int main(){
string book[3]={"c++","java","python"};
int choice;
cout<<"available books\n";
for(int i=0;i<3;i++){
    cout<<i+1<<" ."<<book[i]<<endl;

}
cout<<"enter book number";
cin>>choice;
if(choice>=1&&choice<=3)
cout<<"you selected"<<book[choice-1];
else 
cout<<"invalid choice";
return 0;
}