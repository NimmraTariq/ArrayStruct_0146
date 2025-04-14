#include<iostream>
#include<string>
using namespace std;

 struct buku {
    string judul ;
    string jumlahHalaman;
    int pengarang;
};

 int main (){
    buku bk [2]; // Array of struct

    for (int i = 0; i < 2; i++) {

        cout << "Masukan Judul = ";
        cin >> bk[i].judul;
        cout << "Masukan Jumlah Halaman = ";
        cin >> bk[i].jumlahHalaman;
        cout << "Masukan Pengarang = ";
        cin >> bk[i].pengarang;
    }

    cout << endl;
    cout << "Tampilkan Data Buku" << endl;
    cout << endl;
    for (int i = 0; i < 2; i++) {

    cout << "judul buku = " << bk[i].judul << endl;
    cout << "Jumlah Halaman = " << bk[i].jumlahHalaman << endl;
    cout << "Pengarang = " << bk[i].pengarang << endl;
    }

 }