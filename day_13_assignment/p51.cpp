#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"enter the array size "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
       int maxx=a[0],minn=a[1];
    cout<<"the maximum element are"<<endl;
    for(int i=0;i<n;i++){
    
if(a[i]>maxx){
    maxx=a[i];
}

    }
    cout<<maxx<<endl;
cout<<"min. element are"<<endl;
for(int i=0;i<n;i++){
    if(a[i]<minn){
        minn=a[i];
    }
}
cout<<minn;
return 0;

}