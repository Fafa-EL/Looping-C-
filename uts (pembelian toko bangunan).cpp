#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double A,B,C,D,EMB,EP,EPT,totalbelanja,diskon,potongan,pajak,total;
int item, pilih, semen,pasir,batubata,cat,sekop,cangkul,tangga,gerinda,paku,lem,kabel,sarung;
    
    
    cout<<"Menu Kategori: "<<endl;
    cout<<"1. Material Bangunan\n"<<"2. Peralatan\n"<<"3. Perlengkapan Tambahan\n";

    
    do{
    cout<<"masukkan pilihan: ";
    cin>>pilih;
    
    
    switch (pilih){
        case 1:
        cout<<"Masukkan semen (per 1kg): ";
        cin>>semen;
        cout<<"Masukkan pasir (per 1m): ";
        cin>>pasir;
        cout<<"Masukkan batu bata (per 1pcs): ";
        cin>>batubata;
        cout<<"Masukkan cat dinding: ";
        cin>>cat;
        A=(semen*1200);
        B=(pasir*200000);
        C=(batubata*1200);
        D=(cat*30000);
        EMB=(A+B+C+D);
        cout<<"Total pembelian semen: "<<A<<endl;
        cout<<"Total pembelian pasir: "<<B<<endl;
        cout<<"Total pembelian batu bata: "<<C<<endl;
        cout<<"Total pembelian cat dinding: "<<D<<endl;
        cout<<"total belanja per kategori: "<<EMB<<endl;
        break;
        case 2:
        cout<<"Masukkan sekop: ";
        cin>>sekop;
        cout<<"Masukkan cangkul: ";
        cin>>cangkul;
        cout<<"Masukkan tangga lipat: ";
        cin>>tangga;
        cout<<"Masukkan gerinda: ";
        cin>>gerinda;
        A=(sekop*50000);
        B=(cangkul*75000);
        C=(tangga*300000);
        D=(gerinda*600000);
        EP=(A+B+C+D);
        cout<<"Total pembelian sekop: "<<A<<endl;
        cout<<"Total pembelian cangkul: "<<B<<endl;
        cout<<"Total pembelian tangga lipat: "<<C<<endl;
        cout<<"Total pembelian gerinda: "<<D<<endl;
        cout<<"total belanja per kategori: "<<EP<<endl;
        break;
        case 3:
        cout<<"Masukkan paku (per 1kg): ";
        cin>>paku;
        cout<<"Masukkan lem kayu: ";
        cin>>lem;
        cout<<"Masukkan kabel listrik (per 1m): ";
        cin>>kabel;
        cout<<"Masukkan sarung tangan: ";
        cin>>sarung;
        A=(paku*20000);
        B=(lem*35000);
        C=(kabel*15000);
        D=(sarung*25000);
        EPT=(A+B+C+D);
        cout<<"Total pembelian paku: "<<A<<endl;
        cout<<"Total pembelian lem kayu: "<<B<<endl;
        cout<<"Total pembelian kabel listrik: "<<C<<endl;
        cout<<"Total pembelian sarung tangan: "<<D<<endl;
        cout<<"total belanja per kategori: "<<EPT<<endl;
        break;
        default:
        cout<<"Program Telah Selesai"<<endl;
    }
    }while (pilih!=4);  
    totalbelanja=(EMB+EP+EPT);
    cout<<"Total belanja: "<<totalbelanja<<endl;
    
    if(totalbelanja>=500000){
        diskon=0.12;
    }else if(totalbelanja>=30000||totalbelanja<=500000){
        diskon=0.08;
    }else{
        cout<<"tidak dapat diskon."<<endl;
    }
    
    potongan=(totalbelanja*diskon);
    cout<<"dapat potongan senilai: "<<"rp "<<potongan<<endl;
    pajak=(potongan*0.1);
    cout<<"jumlah pajak; "<<"Rp "<<pajak<<endl;
    total=(totalbelanja-potongan-pajak);
    cout<<"total belanja anda: "<<"rp "<<total<<endl;
    
    return 0;
}