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
int main ()
{
    barang elekronik;
    barang nonelektronik;

    elekronik.nama ="AC";
    elekronik.jumlah = 10;
    elekronik.kartegori= "elektronik";
    elekronik.tanggalProduksi= 20200401;

    nonelektronik.nama= "kursi";
    nonelektronik.jumlah= 2;
    nonelektronik.kartegori="nonelektronik";
    nonelektronik.tanggalProduksi = 20200331;

    elekronik.printData();
    nonelektronik.printData();
}