#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n-1];
    int sum=0;
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int total_sum = n*(n+1)/2;
    cout<<"The missing number is: "<<total_sum-sum;
    return 0;
    
}