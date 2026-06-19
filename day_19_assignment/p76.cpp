#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the matrix: ";
    cin>>n;
    int a[n][n];
    int sum=0;
    cout<<"Enter the elements of the matrix: "<<endl;
for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cin>>a[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        sum+=a[i][i];
        
    }
    cout<<"The sum of the diagonal elements is: "<<sum<<endl;
    return 0;
}