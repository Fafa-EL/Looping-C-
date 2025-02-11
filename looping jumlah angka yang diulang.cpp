//penjumlahan angka//
#include <iostream>
using namespace std;

int main() {
    char ulangin = 'y';
    int angka, counter, total = 0;

    
while (ulangin=='y'){
        cout<<"Masukkan angka: "<<endl;
        cin>>angka;
        total += angka;
        cout<<"jawab (y/t): ";
        cin>>ulangin;
        
        counter++;
    };
    
    cout<<"\n\n-------"<<endl;
    cout<<"perulangan selesai"<<endl;
    cout<<"kamu mengulang sebanyak "<<counter<<" kali"<<endl;
    cout<<"jumlah angka: "<<total<<endl;
    return 0;
}