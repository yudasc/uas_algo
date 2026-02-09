#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct Mahasiswa {
    string nim; // jika bentuknya identitas, gunakan string, jangan numerik
    string nama;
    float nilai;
};

void soal1(){
    // Program ini akan meloop utk mengisi data 3 mahasiswa
    Mahasiswa students[3];
    for (int i = 0; i < 3; i++) {
        cout << "--- Data Mahasiswa ke-" << i + 1 << " ---" << endl;

        cout << "Masukkan NIM: ";
        cin >> students[i].nim;

        // Menggunakan ignore agar getline tidak meloncat karena sisa 'enter' dari cin sebelumnya
        cin.ignore();

        cout << "Masukkan Nama: ";
        getline(cin, students[i].nama);

        cout << "Masukkan Nilai: ";
        cin >> students[i].nilai;
        cout << endl;
    }

    cout << "DAFTAR MAHASISWA:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << students[i].nim << " | " << students[i].nama << " | " << students[i].nilai << endl;
    }
}

double hitungLuas(double r){
    const double PI = 3.14;
    double result;
    result = PI * pow (r, 2); // Pi x R kuadrat
    return result;

}

double hitungKelilingLingkaran(double r) {
    const double PI = 3.14;
    return 2 * PI * r;
}

void soal2(){
    // menghitung luas lingkaran.
    double r;
    cout << "=== Program Hitung Luas Lingkaran dan Keliling ===" << endl;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;
    cout << "Luasnya: " << hitungLuas(r) << endl;
    cout << "Kelilingnya: " << hitungKelilingLingkaran(r);


}

void soal4Pointer(){
    int angka = 10;          // Variabel biasa
    int* ptrAngka;           // Deklarasi pointer (menggunakan tanda *)

    ptrAngka = &angka;       // Menyimpan ALAMAT variabel 'angka' ke dalam pointer

    cout << "Isi dari variabel angka: " << angka << endl;
    cout << "Alamat memori variabel angka (&angka): " << &angka << endl;
    cout << "Isi dari pointer ptrAngka (alamat): " << ptrAngka << endl;

    // Mengakses data lewat pointer (Dereferencing)
    cout << "Isi data yang ditunjuk oleh ptrAngka (*ptrAngka): " << *ptrAngka << endl;

    // Mengubah data lewat pointer
    *ptrAngka = 20;
    cout << "Isi angka setelah diubah lewat pointer: " << angka << endl;
}

void soal5Deret(){
    int n = 1;
    int increment = 1;

    for (int i = 1; i <= 5; i++) {
        cout << n << " ";

        n += increment;

        if (increment < 3) {
            increment++;
        }
    }
}



int main()
{
    int input;
    cout << "[1]. Soal 1: Nama, Nim, Nilai" << endl;
    cout << "[2]. Soal 2: Luas lingkaran dengan fungsi" << endl;
    cout << "[3]. Soal 4: Pointer" << endl;
    cout << "[4], Soal 5: Deret 1 2 4 7 10 dengan looping" << endl;
    cout << "Your input: ";
    cin >> input;
    system("cls");


    if(input == 1){
        soal1();
    }else if(input == 2){
        soal2();
    }else if(input == 3){
        soal4Pointer();
    }else if(input == 4){
        soal5Deret();
    }
    return 0;
}

