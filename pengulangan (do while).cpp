#include <iostream>
using namespace std;

int main() {
    char ulangin = 'y';
    int counter = 0;
    
    do {
        cout<<"Apa mau diulang?"<<endl;
        cout<<"jawab (y/t): ";
        cin>>ulangin;
        
        counter++;
    }while (ulangin=='y');
    
    cout<<"\n\n-------"<<endl;
    cout<<"perulangan selesai"<<endl;
    cout<<"kamu mengulang sebanyak "<<counter<<"kali"<<endl;
    
    return 0;
}