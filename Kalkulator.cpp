#include <iostream>
#include <conio.h>
#include <math.h>
//#include <hasnanhj>
using namespace std;

int pilihan();

int hasnan(){
 cout<<"\t-----------------------------------------------------------"<<endl;
}

int penjumlahan(){
 float bil1, bil2, hasil;
 cout<<"1. Operasi Penjumlahan"<<endl;
 cout<<"   Masukkan bilangan pertama : "; cin>>bil1;
 cout<<"   Masukkan bilangan kedua   : "; cin>>bil2;
 hasil = bil1 + bil2;
 cout<<"   Hasil dari "<<bil1<<" + "<<bil2<<" = "<<hasil<<endl;
 pilihan();
}
int pengurangan(){
 float bil1, bil2, hasil;
 cout<<"2. Operasi Pengurangan"<<endl;
 cout<<"   Masukkan bilangan pertama : "; cin>>bil1;
 cout<<"   Masukkan bilangan kedua   : "; cin>>bil2;
 hasil = bil1 - bil2;
 cout<<"   Hasil dari "<<bil1<<" - "<<bil2<<" = "<<hasil<<endl;
 pilihan();
}
int keluar(){
 hasnan();
 cout<<"Terima kasih telah menggunakan Program Kalkulator Sederhana"<<endl;
 cout<<"Program ini disusun oleh Hasnan Habib Jauhari, Mahasiswa UIN SGD Bandung"<<endl;
 hasnan();
 exit(0);
}
int salah(){
 char hasnan;
 cout<<"Perintah salah !"<<endl;
}
int pilihan(){
 float pil;
 cout<<endl;
 cout<<"Masukkan pilihan anda : "; cin>>pil;
 if(pil==1){
  penjumlahan();
 }
 else if(pil==2){
  pengurangan();
 }
 else if(pil==3){
  perkalian();
 }
 else {
  salah();
 }
}
int main(){
 cout<<"\tProgram Kalkulator Sederhana"<<endl;
 cout<<"\t        2 Bilangan"<<endl;
 cout<<"\t----------------------------"<<endl;
 cout<<"Pilih Operator"<<endl;
 cout<<"--------------"<<endl;
 cout<<"1. Penjumlahan"<<endl;
 cout<<"2. Pengurangan"<<endl;
 cout<<"3. Exit Program"<<endl;
 pilihan();
 
 getch();
}