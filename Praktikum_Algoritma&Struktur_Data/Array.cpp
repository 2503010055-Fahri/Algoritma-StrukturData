#include <iostream>
using namespace std;

int main() {
    // membuat array
    int nilai[5]{0,1,2,3,4};

    cout << &nilai[0] << " Ini nilainya adalah: " << nilai[0] << endl;
    cout << &nilai[1] << " Ini nilainya adalah: " << nilai[1] << endl;
    cout << &nilai[2] << " Ini nilainya adalah: " << nilai[2] << endl;
    cout << &nilai[3] << " Ini nilainya adalah: " << nilai[3] << endl;
    cout << &nilai[4] << " Ini nilainya adalah: " << nilai[4] << endl;

    // memanipulasi
    nilai[3] = 7;

    cout << endl;
    cout << &nilai[0] << " Ini nilainya adalah: " << nilai[0] << endl;
    cout << &nilai[1] << " Ini nilainya adalah: " << nilai[1] << endl;
    cout << &nilai[2] << " Ini nilainya adalah: " << nilai[2] << endl;
    cout << &nilai[3] << " Ini nilainya adalah: " << nilai[3] << endl;
    cout << &nilai[4] << " Ini nilainya adalah: " << nilai[4] << endl;

    // mengambil ukuran dari array
    cout << endl;
    cout << "Ukuran Array = " << sizeof(nilai) << " Byte" << endl;
    cout << "Jumlah member array = " << sizeof(nilai)/sizeof(int);
}