#include <iostream>
using namespace std;

class mahasiswa {
    
    public:
    int nim;
    string nama;
    float nilai;

    void printdata() {
        cout << "NIM: " << nim << endl;
        cout << "Nama: " << nama << endl;
        cout << "Nilai: " << nilai << endl;

    }
};  //batas class

int main() {
    mahasiswa mhs1;
    mhs1.nim = 2025;
    mhs1.nama = "Abra";
    mhs1.nilai = 90.5;

    mhs1.printdata();
}
