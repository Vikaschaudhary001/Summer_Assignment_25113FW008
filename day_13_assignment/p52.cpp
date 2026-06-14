#include<iostream>
using namespace std;
int main(){
        int n,count1=0,count2=0;

    cout<<"enter the array size "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            count1++;
        }
        else
        count2++;
    }
    cout<<"even elements are"<<endl;
    cout<<count1++<<endl;
 cout<<"odd elements are"<<endl;
 cout<<count2;
 return 0;
}