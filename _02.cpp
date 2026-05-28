#include <iostream>
using namespace std;

int main() {
  int n,multiply=1;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i=1;i<=10;i++){
multiply=n*i;
    cout<<n<<" * "<<i<<" = "<<multiply<<endl;

cout<<endl;
    }
    return 0;
}