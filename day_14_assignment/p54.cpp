#include<iostream>
using namespace std;
int main(){
    int n,key,count=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key element: ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
    }
    cout<<"Element found "<<count<<" times in the array";
    return 0;
}