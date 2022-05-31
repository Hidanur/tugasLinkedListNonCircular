#include <iostream>

using namespace std;

//NAMA      : NURHIDAYAH
//NIM       : 1121031065
//NAMA FILE : LINKED LIST NON CIRCULAR
//DESKRIPSI PROGRAM ;
// Membuat Fuction untuk Mencari Data tertentu
// Membuat Fuction untuk Menghapus Data tertentu

int main(){
    int angka[] = {6, 2, 1, 7, 8,};
    int length = sizeof(angka)/sizeof(*angka);
    int dtCari, hasilCari;
    cout<<"Data Tersedia : "<<endl;
    for (int a = 0; a < length; a++){
        cout<<"Indek ke-"<<a<<" : "<<angka[a]<<endl;
    }
    cout<<"Data yang Dicari : ";
    cin>>dtCari;
    for (int b = 0; b < length; b++){
        if(dtCari == angka[b]){
            hasilCari++;
        }
    }
    if(hasilCari == 0){
        cout<<"Data tidak ditemukan"<<endl;
    } else {
       cout<<"Data "<<dtCari<<" ditemukan di :"<<endl;
       for(int c = 0; c < length; c++){
           if(dtCari == angka[c]){
              cout<<"index ke-"<<c<<endl;
           }
       }
    }
}


