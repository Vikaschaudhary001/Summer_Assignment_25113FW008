#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter a number"<<endl;
    cin>>n;
 if(n==0||n==1){
            cout<<"neither prime nor composite number"<<endl;
        }
    for( i=2;i<=n;i++){
        if(n%i==0){
                      break;
        }
    }
     if (i==n){
        cout<<"prime"<<endl;
    }

        else if(i<n) {
            cout<<"not prime number"<<endl;
        }
       
}