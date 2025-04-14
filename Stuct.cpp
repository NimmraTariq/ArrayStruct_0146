#include<iostream>
using namespace std;

 struct buku { 
    string judul ;
    string jumlahHalaman;
    int pengarang;
};

 int main (){
    buku bk;

    cout << "Masukan Judul = ";
    cin >> bk.judul;
    cout << "Masukan Jumlah Halaman = ";
    cin >> bk.jumlahHalaman;
    cout << "Masukan Pengarang = ";
    cin >> bk.pengarang;

    cout << endl;
    cout << "Tampilkan Data Buku" << endl;
    cout << endl;

    cout << "judul buku = " << bk.judul << endl;
    cout << "Jumlah Halaman = " << bk.jumlahHalaman << endl;
    cout << "Pengarang = " << bk.pengarang << endl;

 }