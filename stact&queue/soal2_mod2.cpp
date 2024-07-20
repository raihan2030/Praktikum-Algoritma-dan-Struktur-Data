#include <iostream>
using namespace std;

struct stack{
    int atas;
    int max;
    int data[100];
} Tumpuk;


void buat(){
    cout << "Membuat Stack..." << endl;
    cout << "Maksimal Stack: ";
    cin >> Tumpuk.max;
    Tumpuk.atas = -1;
    cout << "Stack dibuat";
}

int penuh(){
    if(Tumpuk.atas == Tumpuk.max-1){
        return 1;
    }
    else{
        return 0;
    }
}

int kosong(){
    if(Tumpuk.atas == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void input(){
    if(penuh() == 0){
        Tumpuk.atas++;
        cout << "Masukkan data: ";
        int data;
        cin >> data;
        Tumpuk.data[Tumpuk.atas] = data;
        cout << "Data " << Tumpuk.data[Tumpuk.atas]
            << " Masuk Ke Stack";
    }
    else{
        cout << "Tumpukan Penuh";
    }
}

void hapus(){
    if(kosong() == 0){
        cout << "Data Teratas Sudah Terambil";
        Tumpuk.atas--;
    }
    else{
        cout << "Data Kosong";
    }
}

void tampil(){
    if(kosong() == 0){
        for(int i = Tumpuk.atas; i >= 0; i--){
            cout << "\nTumpukan Ke " << i << " = " << Tumpuk.data[i];
        }
    }
    else{
        cout << "Tumpukan Kosong!";
    }
}

void bersih(){
    Tumpuk.atas = -1;
    cout << "Tumpukan Kosong!";
}

int main(){
    int pil;
    do{
        cout << "\n\n";
        cout << "1. Membuat stack" << endl;
        cout << "2. Menambah data stack" << endl;
        cout << "3. Menghapus data stack" << endl;
        cout << "4. Menampilkan stack" << endl;
        cout << "5. Membersihkan stack" << endl;
        cout << "6. Exit" << endl;

        cout << "\nMasukkan pilihan: ";
        cin >> pil;

        switch (pil)
        {
        case 1:
            buat();
            break;
        case 2:
            input();
            break;
        case 3:
            hapus();
            break;
        case 4:
            tampil();
            break;
        case 5:
            bersih();
            break;
        
        default:
            break;
        }
    }while(pil<6);
}

//Copyright: by Muhammad Raihan