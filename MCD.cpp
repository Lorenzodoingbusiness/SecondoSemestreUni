//Calcolo del massimo comune divisore tra due numeri tramite l'Algoritmo di Euclide
#include <iostream>  
using namespace std;
int MCD,a,b,r;
int main(){
INIZIO:cout<<"Immetti due numeri diversi da 0. Per separarli premi INVIO"<<endl;
cin>>a>>b;
while(true){
 if(b==0 || a==0){
  cout<<"errore"<<endl;
  goto INIZIO;
 }
if(a%b==0){
 if(a>=0&&b>=0){
 MCD= b;
 cout<<"Il massimo comune divisore e: "<< MCD<<endl;
 }
 else {
  MCD=b;
  cout<<"I massimi comuni divisori sono: "<<MCD<<" e "<<-MCD <<endl;
 }
 goto INIZIO;
    }  
 else {
  r=a%b;
  a=b;
  b=r;
    }
     }  
}
