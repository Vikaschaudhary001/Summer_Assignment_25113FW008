#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int l=n-1,i=0;
   while( i<=l){
       swap(arr[i],arr[l]);
       i++;
       l--;
        
    }
    cout<<"Reversed array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}