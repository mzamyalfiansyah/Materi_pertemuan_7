#include<iostream>
using namespace std;

int main(){

    int angka[5];
    int size;
    int valuebesar;
    int value;


    cout << "Masukkan 5 nilai :" << endl;
    for(int i = 1; i < 6; ++i){

        cout << "Masukkan nilai ke-" << i << ":";
        cin >> angka[i];
    }
    
    int terbesar = angka[5];
    for (int i = 1; i < 6; i++) {
        if (angka[i] > terbesar) {
            terbesar = angka[i];
        }
    }
    cout << "Nilai tertinggi adalah: " << terbesar << endl;
    
    cout << endl;
    
    int cari;
    cout << "Masukkan angka untuk diperiksa: ";
    cin >> cari;
    
    cout << endl;
    
    bool found = false;
    for (int i = 1; i < 6; i++) {
        if (angka[i] == cari) {
            cout << "nilai " << cari << " ditemukan, di urutan ke " << i << endl;
            found = true;
        }
    }
    
    if(!found){
        
        cout << "nilai " << cari << " tidak ditemukan" << endl;
            
            
    }  
    

 

    return 0;

}
