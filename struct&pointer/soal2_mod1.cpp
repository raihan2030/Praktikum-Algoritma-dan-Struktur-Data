#include <iostream>
using namespace std;

struct data_kndrn{
    string plat, jenis, pemilik,
    alamat, kota;
} kendaraan1;

int main(){
    kendaraan1.plat="DA1234MK";
    kendaraan1.jenis="RUSH";
    kendaraan1.pemilik="Andika Hartanto";
    kendaraan1.alamat="Jl. Kayu Tangi 1";
    kendaraan1.kota="Banjarmasin";

    cout<<endl<<"a. Plat Nomor Kendaraan : "<<kendaraan1.plat<<endl;
    cout<<"b. Jenis Kendaraan : "<<kendaraan1.jenis<<endl;
    cout<<"c. Nama Pemilik : "<<kendaraan1.pemilik<<endl;
    cout<<"d. Alamat : "<<kendaraan1.alamat<<endl;
    cout<<"e. Kota : "<<kendaraan1.kota<<endl<<endl;
}