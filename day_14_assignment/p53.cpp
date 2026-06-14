    #include<iostream>
    using namespace std;
    int main(){
        int n,key;
        cout<<"Enter a number  ";
        cin>>n;
int arr[n];
        cout<<"Enter the elements of the array  ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"Enter the key element  ";
        cin>>key;
        for(int i=0;i<n;i++){
            if(arr[i]==key){
                cout<<"Element found at index "<<i;
                return 0 ;
            }
        }
        cout<<"Element not found in the array";
        return 0;
    }

    