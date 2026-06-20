#include<iostream>
using namespace std;
int main(){
    int r1,r2,c1,c2;
    cout<<"Enter the number of rows offirst matrix: "<<endl;
    cin>>r1;
    cout<<"Enter the number of columns of first matrix: "<<endl;
    cin>>c1;
    cout<<"Enter the number of rows of second matrix: "<<endl;
    cin>>r2;

    cout<<"Enter the number of columns of second matrix: "<<endl;
    cin>>c2;
    if(c1!=r2){
        cout<<"Matrix multiplication is not possible."<<endl;
        return 0;
    }
    int a[r1][c1],b[r2][c2],product[r1][c2];
    cout<<"Enter the elements of first matrix: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
           cin>>a[i][j];
        }
       
      cout<<endl;
    }
    cout<<"Enter the elements of second matrix: "<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
           cin>>b[i][j];
        }
       
      cout<<endl;
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            product[i][j]=0;
            for(int k=0;k<c1;k++){
                product[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    cout<<"The product of the two matrices is: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<product[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}