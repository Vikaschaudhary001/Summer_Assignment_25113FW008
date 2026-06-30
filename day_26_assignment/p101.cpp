#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main (){
srand(time(0));
int secret=rand()%100+1;
int guess;
cout<<"enter a number between 1to 100"<<endl;
do{
    cout<<"enter your guess";
    cin>>guess;
    if(guess>secret){
        cout<<"too high"<<endl;

    }
    else if(guess<secret)
    cout<<"too low"<<endl;
    else
    cout<<"congratulation! you guessed correctly"<<endl;
}while(guess!=secret);
return 0;
}