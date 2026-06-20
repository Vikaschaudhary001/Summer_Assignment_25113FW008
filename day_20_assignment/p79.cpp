#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the number of rows and columns: ";
    cin>>r>>c;
    int a[10][10];
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           cin>>a[i][j];
        }
       
      cout<<endl;
    }
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
           sum+=a[i][j];
        }
        cout<<"The sum of the elements of row "<<i+1<<" is: "<<sum<<endl;

    }
    return 0;
}