#include <iostream>
using namespace std;

struct queue{
    int max;
    int front;
    int rear;
    int data[100];
} Antrian;

void inisialisasi(){
    cout << "Membuat Queue..." << endl;
    cout << "Maksimal Queue: ";
    cin >> Antrian.max;
    Antrian.front = -1;
    Antrian.rear = -1;
    cout << "Queue dibuat";
}

bool penuh(){
    if(Antrian.rear-Antrian.front == Antrian.max-1){
        return true;
    }
    else{
        return false;
    }
}

bool kosong(){
    if(Antrian.front == -1 && Antrian.rear == -1){
        return true;
    }
    else{
        return false;
    }
}

void INSERT(){
    if(kosong()==true){
        Antrian.front++;
        Antrian.rear++;
        int data;
        cout << "Masukkan data: "; cin >> data;
        Antrian.data[Antrian.rear] = data;
        cout << "Data " << Antrian.data[Antrian.rear] << " Masuk Ke Queue";
    }
    else if(penuh()==false){
        Antrian.rear++;
        int data;
        cout << "Masukkan data: "; cin >> data;
        Antrian.data[Antrian.rear] = data;
        cout << "Data " << Antrian.data[Antrian.rear] << " Masuk Ke Queue";
    }
    else{
        cout << "Antrian Penuh!";
    }
}

void DELETE(){
    if(kosong() == false && Antrian.front != Antrian.rear){
        cout << "Data di antrian depan sudah keluar";
        Antrian.front++;
    }
    else if(kosong() == false && Antrian.front == Antrian.rear){
        cout << "Data di antrian depan sudah keluar";
        Antrian.front = -1;
        Antrian.rear = -1;
    }
    else{
        cout << "Antrian Kosong!";
    }
}

void CETAKLAYAR(){
    if(kosong()==false){
        for(int i = Antrian.rear; i >= Antrian.front; i--){
            cout << "\nAntrian Ke " << i-Antrian.front << " = " << Antrian.data[i];
        }
    }
    else{
        cout << "Antrian Kosong!";
    }
}

void RESET(){
    Antrian.front = -1;
    Antrian.rear = -1;
    cout << "Antrian Di-Reset!";
}

int main(){
    int pil;
    do{
        cout << "\n\n";
        cout << "1. Membuat queue" << endl;
        cout << "2. Menambah data queue" << endl;
        cout << "3. Menghapus data queue" << endl;
        cout << "4. Menampilkan queue" << endl;
        cout << "5. Reset queue" << endl;
        cout << "6. Quit" << endl;

        cout << "\nMasukkan pilihan: ";
        cin >> pil;

        switch (pil)
        {
        case 1:
            inisialisasi();
            break;
        case 2:
            INSERT();
            break;
        case 3:
            DELETE();
            break;
        case 4:
            CETAKLAYAR();
            break;
        case 5:
            RESET();
            break;
        
        default:
            break;
        }
    }while(pil<6);
}

//Copyright: by Muhammad Raihan