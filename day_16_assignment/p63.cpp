#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the sum to find pairs: "<<endl;
cin>>sum;
for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        if(arr[i]+arr[j]==sum){
            cout<<arr[i]<<" and "<<arr[j]<<endl;
        }
    }
}

    return 0;
}