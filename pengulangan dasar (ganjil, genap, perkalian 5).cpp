//bilangan 1-10
#include <iostream>
using namespace std;
int main() {
    
   for (int i=1; i<=10; i++){
       cout<<"bilangan: "<<i<<endl;
   }
     
   
    return 0;
}

//bilangan genap
#include <iostream>
using namespace std;
int main() {
   int i; 
   
   cout<<"indeks genap: "<<endl;
   for (int i=2; i<=20; i++){
       if (i%2==0){
       cout<<"indeks "<<i<<endl;
   }
   }
   
    return 0;
} 

//bilangan ganjil
#include <iostream>
using namespace std;
int main() {
   int i; 
   
   cout<<"indeks ganjil: "<<endl;
   for (int i=1; i<=15; i++){
       if (i%2!=0){
       cout<<"indeks "<<i<<endl;
   }
   }
   
    return 0;
} 

//penambahan 1-100
#include <iostream>
using namespace std;
int main() {
   int i, x=i, y=i;
   int total; 
   
   for (int i=1; i<=100; i++){
       cout<<"input angka A: ";
       cin>>x;
       cout<<"input angka B: ";
       cin>>y;
       cout<<x+y<<endl;
   }
   
    return 0;
} 

//perkalian 5
#include <iostream>
using namespace std;
int main() {
   int i; 
  
   for (int i=0; i<=10; i++){
       cout<<"5 x "<<i<<" = "<<i*5<<endl;
   }
   
    return 0;
} 


