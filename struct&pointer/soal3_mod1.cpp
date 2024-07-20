#include <iostream>
using namespace std;

struct chr
{
    char huruf;
    string kata;
    int angka;
};

int main(){
    chr output1;
    cout<<endl;
    cout<<"a. Masukkan sebuah huruf = ";cin>>output1.huruf;
    cout<<"b. Masukkan sebuah kata = ";cin>>output1.kata;
    cout<<"c. Masukkan Angka = ";cin>>output1.angka;

    cout<<"d. Huruf yang Anda masukkan adalah "<<output1.huruf<<endl;
    cout<<"e. Kata yang Anda masukkan adalah "<<output1.kata<<endl;
    cout<<"f. Angka yang Anda masukkan adalah "<<output1.angka<<endl<<endl;
}