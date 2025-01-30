#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double harga, totalmaterial, totalperalatan, totalpertam, totalbelanja,diskon,potongan,pajak,total;
int pilih, jumlah, kategori, material, peralatan, pertam;
    
    
    cout<<"Menu Kategori: "<<endl;
    cout<<"1. pembelian barang\n"<<"2. total belanja\n"<<"3. menu selesai\n";

    
    do{
    cout<<"masukkan pilihan: ";
    cin>>pilih;
    
    
    switch (pilih){
        case 1:
        cout<<"Menu Kategori: "<<endl;
        cout<<"1. material bangunan\n"<<"2. peralatan\n"<<"3. perlengkapan tambahan\n";
        do {
            cout<<"pilih kategori: "<<endl;
            cin>>kategori;
        
        if(kategori==1){
            cout<<"1. semen (1kg = 1200)\n"<<"2. pasir (1m = 200000)\n"<<"3. batu bata = (1pcs = 1200)\n"<<"4. cat dinding (1pcs = 30000)"<<endl;
            cout<<"pilih kebutuhan: "<<endl;
            cin>>material;
            cout<<"masukkan jumlah: "<<endl;
            cin>>jumlah;
            
            if (material == 1){
            harga = 60000*jumlah;
            totalmaterial += harga;
            }else if (material == 2){
            harga = 200000*jumlah;
            totalmaterial += harga;
            }else if(material == 3){
            harga = 120000*jumlah;
            totalmaterial += harga;
            }else if(material == 4){
            harga = 150000*jumlah;
            totalmaterial += harga;
            }
        }else if(kategori == 2){
            cout<<"1. sekop (1pcs = 50000)\n"<<"2. cangkul (1pcs = 75000)\n"<<"3. tangga lipat = (1pcs = 300000)\n"<<"4. gerinda (1pcs = 600000)"<<endl;
            cout<<"pilih kebutuhan: "<<endl;
            cin>>peralatan;
            cout<<"masukkan jumlah: "<<endl;
            cin>>jumlah;
            
            if (peralatan == 1){
            harga = 50000*jumlah;
            totalperalatan += harga;
            }else if (peralatan == 2){
            harga = 75000*jumlah;
            totalperalatan += harga;
            }else if(peralatan == 3){
            harga = 300000*jumlah;
            totalperalatan += harga;
            }else if(peralatan == 4){
            harga = 60000*jumlah;
            totalperalatan += harga;
            }
        }else if(kategori == 3){
            cout<<"1. paku (1kg = 20000)\n"<<"2. lem kayu (1pcs = 35000)\n"<<"3. kabel listrik = (1m = 15000)\n"<<"4. sarung tangan (1pcs = 25000)"<<endl;
            cout<<"pilih perlengkapan tambahan: "<<endl;
            cin>>pertam;
            cout<<"masukkan jumlah: "<<endl;
            cin>>jumlah;
            
            if (pertam == 1){
            harga = 20000*jumlah;
            totalpertam += harga;
            }else if (pertam == 2){
            harga = 35000*jumlah;
            totalpertam += harga;
            }else if(pertam == 3){
            harga = 15000*jumlah;
            totalpertam += harga;
            }else if(pertam == 4){
            harga = 25000*jumlah;
            totalpertam += harga;
            }
}
        }while (kategori !=4);
        break;
        case 2:
        totalbelanja=(totalmaterial+totalperalatan+totalpertam);
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
        break;
        default :
        cout<<"program telah selesai"<<endl;
        break;
}
}while (pilih !=3);
return 0;
}