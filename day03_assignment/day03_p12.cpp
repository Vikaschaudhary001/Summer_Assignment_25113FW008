# include <iostream>
using namespace std;
int main(){
    int a,b,max;
    cout <<"enter two numbers "<<endl;
    cin>>a>>b;
    max=(a>b)?a:b;
    while(true){
        if(max%a==0 && max%b==0){
            cout<<"lcm of "<<a<<" and "<<b<<" is "<<max<<endl;
            break;
        }
        ++max;
    }
    return 0;
}