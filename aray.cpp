#include<iostream>
using namespace std;

int main(){

    int nilai[5];
    cout << "Masukkan 5 nilai Mahasiswa" << endl;
    for(int i = 0; i < 5; ++i)
    {
    cout << "Masukkan nilai ke-" << i << ":";
    cin >> nilai[i];
    }

    cout << "Nilai dalam Array adalah: " << endl;
    for(int j = 0; j < 5; ++j)
    {
        cout << "Nilai ke-" << j << ":";
        cout << nilai[j] << endl;
    }
    return 0;
}
