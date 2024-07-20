#include <iostream>
#include <algorithm>
#include <conio.h>
using namespace std;

int n, kiri, tengah, kanan, cari, pil;

void SequentialSearch(int size)
{
    bool ketemu = false;
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Angka ke [" << i << "] : ";
        cin >> arr[i];
    }

    cout << "==================================\n";
    cout << "Data yang telah dimasukkan adalah:\n";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }

    cout << "\n==================================\n";
    cout << "Masukkan angka yang dicari: ";
    cin >> cari;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == cari)
        {
            ketemu = true;
            break;
        }
    }

    if(ketemu)
    {
        cout << "Angka ditemukan!";
    }
    else
    {
        cout << "Angka tidak ditemukan!";
    }
}

void BinarySearch(int size)
{
    bool ketemu = false;
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Angka ke [" << i << "] : ";
        cin >> arr[i];
    }

    sort(arr, arr+size);

    cout << "==================================\n";
    cout << "Data yang telah diurutkan adalah:\n";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }

    cout << "\n==================================\n";
    cout << "Masukkan angka yang dicari: ";
    cin >> cari;

    kiri = 0;
    kanan = size - 1;
    while(kiri <= kanan)
    {
        tengah = (kiri + kanan) / 2;
        if (cari == arr[tengah])
        {
            ketemu = true;
            break;
        }
        else if(cari < arr[tengah])
        {
            kanan = tengah - 1;
        }
        else
        {
            kiri = tengah + 1;
        }
    }
    if(ketemu)
    {
        cout << "Angka ditemukan!";
    }
    else
    {
        cout << "Angka tidak ditemukan!";
    }
}

int main()
{
    do
    {
        cout << "Pilih menu" << endl;
        cout << "1. Sequential Searching" << endl;
        cout << "2. Binary Searching" << endl;
        cout << "3. Jelaskan Perbedaan Sequential Searching dan Binary Searching!" << endl;
        cout << "4. Exit" << endl;
        cout << "Pilih: ";
        cin >> pil;

        switch (pil)
        {
        case 1:
            cout << "Masukkan jumlah data: ";
            cin >> n;
            SequentialSearch(n);
            break;

        case 2:
            cout << "Masukkan jumlah data: ";
            cin >> n;
            BinarySearch(n);
            break;

        case 3:
            cout << "Sequential Searching adalah teknik pencarian data satu per satu\n";
            cout << "secara berurutan dari indeks awal sampai indeks akhir.\n";
            cout << "Kelebihan dari Sequential Searching ini adalah jika data yang\n";
            cout << "ingin dicari berada di indeks depan, maka data akan ditemukan\n";
            cout << "dengan cepat.\n";
            cout << "Adapun kekurangannya adalah jika data yang ingin dicari berada di indeks\n"; 
            cout << "paling akhir, maka proses pencarian akan membutuhkan waktu yang lama.\n\n";

            cout << "Sedangkan, Binary Searching adakah teknik pencarian data dengan\n"; 
            cout << "melakukan proses pembagian ruang pencarian secara berulang-ulang\n";
            cout << "sampai data ditemukan atau sampai ruang pencarian tidak dapat\n";
            cout << "dibagi lagi, dengan syarat semua data harus diurutkan terlebih\n";
            cout << "dahulu dari angka yang terkecil hingga angka yang terbesar.\n";
            cout << "Kelebihan dari Binary Searching ini adalah kompleksitas algoritmanya\n";
            cout << "lebih kecil dari Sequential Search.\n";
            cout << "Adapun kekurangannya adalah hanya bisa dilakukan untuk himpunan data\n";
            cout << "yang terurut atau diurutkan terlebih dahulu. Selain itu, Binary Searching\n";
            cout << "ini juga tidak bisa mengangani duplikat dengan baik.";
            break;
        
        default:
            cout << "\nTERIMA KASIH" << endl;
            cout << "Program was made by Muhammad Raihan (2310817110008).";
        }

        cout << "\n\nPress any key to continue!" << endl;
        getch();
        system("cls");

    } while(pil < 4);
}