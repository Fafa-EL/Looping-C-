#include <iostream>
#include <cmath>
using namespace std;

int main() {
double A,B,CMA,CMI,CNDI,CDER, totalbelanja,diskon,potongan,total;
int item, pilih, keripik, biskuit, air, jus, sb, sampo, sp, deterjen;
    
    
    cout<<"masukkan bangun datar: "<<endl;
    cout<<"1. makanan\n"<<"2. minuman\n"<<"3. produk kebersihan\n"<<"4. kebutuhan rumah tangga\n";
    
    do{
    cout<<"masukkan pilihan: ";
    cin>>pilih;
    
    
    switch (pilih){
        case 1:
        cout<<"Masukkan jumlah keripik: ";
        cin>>keripik;
        cout<<"Masukkan jumlah biskuit: ";
        cin>>biskuit;
        A=(keripik*10000);
        B=(biskuit*8000);
        CMA=(A+B);
        cout<<"Total pembelian keripik: "<<A<<endl;
        cout<<"Total pembelian biskuit: "<<B<<endl;
        cout<<"total belanja per kategori: "<<CMA<<endl;
        break;
        case 2:
        cout<<"Masukkan jumlah air mineral: ";
        cin>>air;
        cout<<"Masukkan jumlah jus: ";
        cin>>jus;
        A=(air*5000);
        B=(jus*12000);
        CMI=(A+B);
        cout<<"Total pembelian air mineral: "<<A<<endl;
        cout<<"Total pembelian jus: "<<B<<endl;
        cout<<"total belanja per kategori: "<<CMI<<endl;
        break;
        case 3:
        cout<<"Masukkan jumlah sabun mandi: ";
        cin>>sb;
        cout<<"Masukkan jumlah sampo: ";
        cin>>sampo;
        A=(sb*7000);
        B=(sampo*15000);
        CNDI=(A+B);
        cout<<"Total pembelian sabun mandi: "<<A<<endl;
        cout<<"Total pembelian sampo: "<<B<<endl;
        cout<<"total belanja per kategori: "<<CNDI<<endl;
        break;
        case 4:
        cout<<"Masukkan jumlah sabun cuci piring: ";
        cin>>sp;
        cout<<"Masukkan jumlah deterjen: ";
        cin>>deterjen;
        A=(sp*4000);
        B=(deterjen*20000);
        CDER=(A+B);
        cout<<"Total pembelian sabun cuci piring: "<<A<<endl;
        cout<<"Total pembelian deterjen: "<<B<<endl;
        cout<<"total belanja per kategori: "<<CDER<<endl;
        break;
        default:
        cout<<"Program Telah Selesai"<<endl;
    }
    }while (pilih!=5);  
    totalbelanja=(CMA+CMI+CDER+CNDI);
    cout<<"Total belanja: "<<totalbelanja<<endl;
    
    if(totalbelanja>=100000){
        diskon=0.1;
    }else{
        cout<<"tidak dapat diskon."<<endl;
    }
    potongan=(totalbelanja*diskon);
    cout<<"dapat potongan senilai: "<<"rp "<<potongan<<endl;
    
    total=(totalbelanja-potongan);
    cout<<"total belanja anda: "<<"rp "<<total<<endl;
    
    return 0;
}