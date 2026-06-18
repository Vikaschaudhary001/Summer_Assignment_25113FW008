#include<iostream>
using namespace std;
int main(){
int n1,n2;

cout<<"Enter the size of first array: ";
cin>>n1;
int arr[n1];
cout<<"Enter the element of first array: "<<endl;
for(int i=0;i<n1;i++){
    
    cin>>arr[i];
}
cout<<"Enter the size of second array: ";
cin>>n2;
int b[n2];
cout<<"Enter the element of second array: "<<endl;
for(int i=0;i<n2;i++){
    cin>>b[i];
}
cout<<"commpon elements of both array are: "<<endl;
for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
        if(arr[i]==b[j]){
            cout<<arr[i]<<" ";
            break;
        }
    }
}
return 0;
}   