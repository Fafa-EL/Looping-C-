#include <iostream>
# include <cmath>
using namespace std;


int main (){
    double  dapur,kamarmandi,taman,total,biayaHarian, air;
    int pilih, area;
    cout << " Sistem Pengelolaan Air Rumah Pintar "<<endl;
    cout << "1. lihat konsumsi air per area"<<endl;
    cout << "2. lihat konsumsi air keseluhuran"<<endl;
    cout << "3. total biaya pemakaian air"<<endl;
    cout << "4. keluar"<<endl;
    
    dapur = (20*1)+(10*3);
    kamarmandi = (8*30)+(5*8)+(2*15);
    taman = (50*2)+(20*1);
    air=3000/1000;
    biayaHarian=(total*air);
    total=(dapur+kamarmandi+taman);
    
do {
   cout << " Sistem yang ingin dilihat(1-4) : ";
   cin >> pilih;
   
   switch (pilih){
       case 1:
       cout <<"konsumsi air per area."<<endl;
       cout<<"1. dapur"<<endl;
       cout<<"2. kamar mandi"<<endl;
       cout<<"3. taman"<<endl;
       cout<<"pilih area: "<<area<<endl;
       cin>>area;
       
       if(area==1){
       cout<<"Pemakaian air: "<<dapur<<endl;
       }
       else if (area==2){
       cout<<"Pemakaian air: "<<kamarmandi<<endl;
       }
       else if (area==3){
       cout<<"Pemakaian air: "<<taman<<endl;
       }
       break;
       case 2:
       cout<<"total konsumsi air seluruh rumah: "<<total<<endl;
       break;
       case 3 :
       cout << "Biaya Harian Penggunaan Air Rumah ini adalah: "<<"Rp "<<biayaHarian<<endl;
   }
   }while(pilih !=5);
   


    return 0;
}


