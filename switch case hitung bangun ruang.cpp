#include <iostream>
#include <cmath>
using namespace std;

int main() {
double sisi, tinggi, jari, luas, volume;
int pilih;
    
    
    cout<<"Opsi yang tersedia: "<<endl;
    cout<<"1. volume kubus\n"<<"2. luas lingkaran\n"<<"3. volume silinder\n"<<endl;
    

    cout<<"masukkan pilihan: ";
    cin>>pilih;
    
    
    switch (pilih){
        case 1:
        cout<<"Masukkan sisi kubus (cm): ";
        cin>>sisi;
        volume=(sisi*sisi*sisi);
        cout<<"Volume kubus adalah: "<<volume<<" cm"<<endl;
        break;
        case 2:
        cout<<"Masukkan jari jari (cm): ";
        cin>>jari;
        luas=(3.14*jari*jari);
        cout<<"luas lingkaran adalah: "<<luas<<" cm"<<endl;
        break;
        case 3:
        cout<<"Masukkan jari jari (cm): ";
        cin>>jari;
        cout<<"Masukkan tinggi (cm): ";
        cin>>tinggi;
        volume=(3.14*jari*tinggi);
        cout<<"Volume silinder adalah: "<<volume<<" cm"<<endl;
        break;
        default:
        cout<<"Program Telah Selesai"<<endl;
    }

   
    return 0;
}