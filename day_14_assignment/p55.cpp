#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxx=arr[0];
    int smaxx=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>maxx){
            smaxx=maxx;
            maxx=arr[i];
        }
        else if(arr[i]>smaxx && arr[i]!=maxx){
            smaxx=arr[i];
        }
    }
    cout<<"The second maximum element is "<<smaxx;
    return 0;
}