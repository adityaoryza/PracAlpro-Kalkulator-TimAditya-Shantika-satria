#include<iostream>
using namespace std;
int main(){
    char lanjut;
    int angka1,angka2,pilih;
    menu :
    cout << "\t\t PROGRAM KALKULATOR SEDERHANA " << endl;
    cout << "\t PROGRAM INI DIKEJAKAN OLEH TIM DENGAN ANGGOTA " << endl;
    cout << "\t 1. ADITYA ORYZA MAHENDRA (2100018401) " << endl;
    cout << " Masukan Operasi yang akan anda kerjakan : " << endl;
    cout << " 1. Penjumlahan " << endl;
    cout << " 2. Pengurangan " << endl;
    cout << " 3. Perkalian  " << endl;
    cout << " 4. Pembagian  " << endl;
    cout << " Masukan Operasi yang akan dipilih : ";
    cin >>pilih;
    switch (pilih)
    {
    case 1:
        cout << " \t\tOPERASI PENJUMLAHAN!!" << endl;
        cout << " Masukan angka pertama\t: ";
        cin >> angka1;
        cout << " Masukan angka kedua\t: ";
        cin >> angka2;
        cout << " Maka hasil penjumlahan " << angka1 << " + " << angka2 << " yaitu : " << angka1 + angka2 << endl;
        cout << " Apakah anda akan melanjutkan penghitungan? (y/n)\t:";
        cin >> lanjut;
        if(lanjut=='y'){
            goto menu;
        }
        else {
            break;
        }
    case 2 : 
        cout << " OPERASI PENGURANGAN!!" << endl;
        cout << " Masukan angka pertama : ";
        cin >> angka1;
        cout << " Masukan angka kedua  : ";
        cin >> angka2;
        cout << " Maka hasil pengurangan " << angka1 << " + " << angka2 << " yaitu : " << angka1 - angka2 << endl;
        cout << " Apakah anda akan melanjutkan penghitungan? (y/n)\t:";
        cin >> lanjut;
        if(lanjut=='y'){
            goto menu;
        }
        else {
            break;
        }
        break;

    default:
        break;
    }
}   