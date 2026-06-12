#include<iostream>
using namespace std;
void perfect (int n){
    int sum=0;
    
       for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
                 }
                                 }
     if( n==sum){
     cout<<" perfect number"<<endl;
     }
     else{
        cout<<"not a perfect number";
     }
    }
     int main(){
        int n;
        cout<<"enter a number"<<endl;
        cin>>n;
        perfect( n);
        return 0;
      
     }


