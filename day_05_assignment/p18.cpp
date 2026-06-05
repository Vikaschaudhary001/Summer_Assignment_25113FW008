#include<iostream>
using namespace std;
int main(){
  
        int n,temp,f=1,rem,sum=0;
cout<<"enter a number"<<endl;
cin>>n;
temp=n;
while(n>0){
    rem=n%10;
    for(int i=1;i<=rem;i++){
        f=f*i;
    }
sum=sum+f;
n=n/10;
}
if(temp==sum){
    cout<<temp<<" is a strong number"<<endl;
}
else{
    cout<<temp<<" is not a strong number"<<endl;
}
return 0;
    
}