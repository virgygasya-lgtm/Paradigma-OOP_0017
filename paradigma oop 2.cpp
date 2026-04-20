#include<iostream>
using namespace std;

class barang{
    public:
    string nama;
    int jumlah;
    string kartegori;
    int tanggalProduksi;

    void printData(){
        cout << "Nama: " << nama << endl;
        cout << "jumlah: " << jumlah << endl;
        cout << "kartegori: " << kartegori << endl;
        cout << "tanggal produksi: " << tanggalProduksi  << endl;
    }
};
