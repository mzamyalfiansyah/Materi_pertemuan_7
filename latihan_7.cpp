#include<iostream>
using namespace std;

int main(){

    int angka[10];
    int n = sizeof(angka) / sizeof(angka[0]);

    cout << "Masukkan 5 nilai Mahasiswa" << endl;
    for(int i = 0; i < 10; ++i){

    cout << "Masukkan nilai ke-" << i << ":";
    cin >> angka[i];
    }

    sort(angka, angka + n, greater<int>());

    cout << endl;
    cout << "Angka terurut dari terbesar ke terkecil: ";
    for (int j = 0; j < n; j++) {
        cout << angka[j] << " ";
    }
    return 0;

}
