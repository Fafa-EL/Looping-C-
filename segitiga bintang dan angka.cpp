#include <iostream>
using namespace std;

int main() {
   int n;
    cout<<"Masukkan jumlah bintang: ";
    cin>>n;
 
    for (int i = 1; i <= n; i++) {
        cout<<" * ";
        for (int j = 2; j <= i; j++)
            cout << " I ";
        cout << endl;
    }
    return 0;
}