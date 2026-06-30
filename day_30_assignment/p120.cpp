#include<iostream>
using namespace std;
struct student {
    int roll;
    string name;
    float marks;
};

int main(){
    student s[3];
for(int i=0;i<3;i++){
    cout<<"enter roll name marks";
    cin>>s[i].roll>>s[i].name>>s[i].marks;
}
cout<<"\n------student records------\n";
for (int i=0;i<3;i++){
    cout<<"roll :"<<s[i].roll<<endl;
    cout<<"name :"<<s[i].name<<endl;
    cout<<"marks :"<<s[i].marks<<endl;
    cout<<"--------------------------"<<endl;
}
return 0;
}