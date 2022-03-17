#include<iostream>
using namespace std;
int main(){
    char lanjut;
    int angka1,angka2,pilih;
    cout << "\t\t PROGRAM KALKULATOR SEDERHANA " << endl;
    cout << "\t PROGRAM INI DIKERJAKAN OLEH TIM DENGAN ANGGOTA : " << endl;
    cout << "\t 1. ADITYA ORYZA MAHENDRA (2100018401) " << endl;
    cout << "\t 2. SATRIA DZAILAMI (2100018384) " << endl;
    cout << "\t 3. SHANTIKA ADILA PUTRI (2100018386) " << endl;
    cout << " Pilihan Operasi Kalkulator : " << endl;
    cout << " 1. Penjumlahan " << endl;
    cout << " 2. Pengurangan " << endl;
    cout << " 3. Perkalian  " << endl;
    cout << " 4. Pembagian  " << endl;
    menu :
    cout << "\n Masukkan operasi yang akan dipilih : ";
    cin >> pilih;
    switch (pilih)
    {
    case 1:
        cout << " \t\t OPERASI PENJUMLAHAN" << endl;
        cout << " Masukkan angka pertama\t: ";
        cin >> angka1;
        cout << " Masukkan angka kedua\t: ";
        cin >> angka2;
        cout << " Maka hasil penjumlahan " << angka1 << " + " << angka2 << " = " << angka1 + angka2 << endl;
        cout << " Apakah Anda akan melanjutkan penghitungan? (y/n)\t:";
        cin >> lanjut;
        if (lanjut=='y'){
            goto menu;
        }
        else {
            goto end;
            break;
        }
    case 2 : 
        cout << " \t\t OPERASI PENGURANGAN" << endl;
        cout << " Masukkan angka pertama\t: ";
        cin >> angka1;
        cout << " Masukkan angka kedua\t: ";
        cin >> angka2;
        cout << " Maka hasil pengurangan " << angka1 << " - " << angka2 << " = " << angka1 - angka2 << endl;
        cout << " Apakah Anda akan melanjutkan penghitungan? (y/n)\t:";
        cin >> lanjut;
        if (lanjut=='y'){
            goto menu;
        }
        else {
            goto end;
            break;
        }
    case 3 :
        cout << " \t\t OPERASI PERKALIAN" << endl;
        cout << " Masukkan angka pertama\t: "; cin >> angka1;
        cout << " Masukkan angka kedua\t: "; cin >> angka2;
        cout << " Maka hasil perkalian " << angka1 << " x " << angka2 << " = " << angka1 * angka2 << endl;
        cout << " Apakah Anda akan melanjutkan penghitungan? (y/n)\t:"; cin >> lanjut;
        if (lanjut=='y'){
            goto menu;}
        else{
            goto end;
            break;}
     
    case 4:
        cout << " \t\t OPERASI PEMBAGIAN" << endl;
        cout << " Masukkan angka pertama\t: ";
        cin >> angka1;
        cout << " Masukkan angka kedua\t: ";
        cin >> angka2;
        cout << " Maka hasil pembagian " << angka1 << " : " << angka2 << " = " << angka1 / angka2 << endl;
        cout << " Apakah Anda akan melanjutkan penghitungan? (y/n)\t:";
        cin >> lanjut;
        if (lanjut =='y')
        {
            goto menu;
        }
        else
        {
            goto end;
            break;
        }
        break;
            
    default :
        cout << " Pilihan tidak tersedia " << endl;
        break;
    }
    end :
    cout << " \n\t\t PROGRAM SELESAI DIJALANKAN " << endl;
}   
