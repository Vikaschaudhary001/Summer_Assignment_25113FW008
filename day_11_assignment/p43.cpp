#include<iostream>
using namespace std;
void prime(int n){
    if(n==0||n==1){
        cout<<"neighter prime nor composite number"<<endl;
    }
   else if(n==2){
        cout<<"prime number"<<endl;
    }
   else if(n>1) {
    int prime=1;
        for(int i=2;i<=n/2;i++){
       
            if(n%i==0){
                cout<<"not prime number"<<endl;
                prime=0;
                break;
            }
        }
        if(prime==1){
            cout<<"prime number"<<endl;
        }
   }
     
  

}
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    prime(n);
    return 0;
}
