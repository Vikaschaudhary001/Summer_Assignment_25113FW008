#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the array size "<<endl;
cin>>n;
int a[n];
cout<<"enter the  arrays elements"<<endl;
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<"the arrays elements are  "<<endl;
for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
}
return 0;
}
