#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1;
    int arr[n1];
    for(int i=0;i<n1;i++){
        cin>>arr[i];
    }
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int c[n1+n2];
    for(int i=0;i<n1;i++){
        c[i]=arr[i];
    }
    for(int i=0;i<n2;i++){
        c[n1+i]=arr2[i];
    }
    for(int i=0;i<n1+n2;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}
