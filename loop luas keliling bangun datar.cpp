#include <iostream>
#include <cmath>
using namespace std;

int main() {
double sisi, panjang, lebar, tinggi, alas, jari, luas, keliling;
int pilih;
    
    
    cout<<"masukkan bangun datar: ";
    cout<<"1 persegi\n"<<"2 persegi panjang\n"<<"3 segitiga\n"<<"4 lingkaran\n";
    
    do{
    cout<<"masukkan pilihan: ";
    cin>>pilih;
    
    
    switch (pilih){
        case 1:
        cout<<"Masukkan sisi persegi: ";
        cin>>sisi;
        luas=(sisi*sisi);
        keliling=(4*sisi);
        cout<<"luas persegi: "<<luas<<endl;
        cout<<"keliling persegi: "<<keliling<<endl;
        break;
        case 2:
        cout<<"Masukkan panjang: ";
        cin>>panjang;
        cout<<"Masukkan lebar: ";
        cin>>lebar;
        luas=(panjang*lebar);
        keliling=(2*(panjang+lebar));
        cout<<"luas persegi panjang: "<<luas<<endl;
        cout<<"keliling persegi panjang: "<<keliling<<endl;
        break;
        case 3:
        cout<<"Masukkan alas: ";
        cin>>alas;
        cout<<"Masukkan tinggi: ";
        cin>>tinggi;
        luas=(1.0/2.0*alas*tinggi);
        cout<<"luas segita: "<<luas<<endl;
        break;
        case 4:
        cout<<"Masukkan jari jari: ";
        cin>>jari;
        luas=(3.14*jari*jari);
        keliling=(2*3.14*jari);
        cout<<"luas lingkaran: "<<luas<<endl;
        cout<<"keliling lingkaran: "<<keliling<<endl;
        break;
        default:
        cout<<"Program Telah Selesai"<<endl;
    }
    }while (pilih!=5);
   
    return 0;
}