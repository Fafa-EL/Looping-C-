//ganjil kecuali kelipatan 3 (input mandiri)//
#include <iostream>
using namespace std;

int main (){
    int j;
    cout<<"masukkan batas angka: "<<endl;
    cin>>j;
    
    for(int i = 1; i<=j; i++){
        if(i%2 !=0 && i%3 !=0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}

//ganjil kecuali kelipatan 3 (max 30)//
#include <iostream>
using namespace std;

int main (){

    
    for(int i = 1; i<=30; i++){
        if(i%2 !=0 && i%3 !=0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}
