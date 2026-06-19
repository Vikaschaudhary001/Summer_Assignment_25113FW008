#include<iostream>
using namespace std;
int main(){
    int r,c;
    
    cout<<"Enter the number of rows and columns: ";
    cin>>r>>c;
    int a[r][c],b[r][c],sub[r][c];
    cout<<"Enter the elements of the first matrix: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           cin>>a[i][j];
        }
      cout<<endl; 
      
    }
    cout<<"Enter the elements of the second matrix: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           cin>>b[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           sub[i][j]=a[i][j]-b[i][j];
        }
        cout<<endl;
    }
    cout<<"The difference of the two matrices is: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           cout<<sub[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}