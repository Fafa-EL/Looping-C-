#include <iostream>
using namespace std;

int main(){
    char ulangi = 'y';
    int counter = 0;

    while(ulangi == 'y'){
        cout<<"Apakah kamu mau mengulang?";
        cout<<"Jawab (y/t): ";
        cin >> ulangi;

        counter++;
    }

    cout<<"\n\n----------\n";
    cout<<"Perulangan Selesai!\n";
    cout<<"Kamu mengulang sebanyak "<<counter<<" kali"<<endl;

    return 0;
}