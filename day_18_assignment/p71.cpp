#include<iostream>
using namespace std;
int main(){
    int n,key;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key to be searched: "<<endl;
    cin>>key;
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            cout<<"Key found at index: "<<mid<<endl;
            return 0;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<"Key not found"<<endl;
    return 0;
}