#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter the size of the first array: "<<endl;
    cin>>n1;
    int a[n1];
    cout<<"Enter the elements of the first array: "<<endl;
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    cout<<"Enter the size of the second array: "<<endl;
    cin>>n2;
    int b[n2];
    cout<<"Enter the elements of the second array: "<<endl;
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    for(int i=0;i<n2;i++){
        for(int j=0;j<n2;j++){
            if(b[i]==b[j]){
               cout<< a[i];
                break;
            }
        }
    }
    return 0;
}