#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
   float avg;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the array element"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"the sum of the arrays elements are"<<endl;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    cout<<sum<<endl;
    cout<<"average of the arrays are"<<endl;

          avg=float(sum)/n;
    
    cout<<avg;
    return 0;
}
