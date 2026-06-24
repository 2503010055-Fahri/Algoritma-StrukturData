/*
Pointer
- Variabel biasa digunakan untuk menyimpan nilai
- Variabel pointer digunakan untuk menyimpan alamat variabel dari variabel lainnya
- Pointer adalaha representasi simbolik dari alamat
- Pointer adalah fitur yang powerfull pada c++ dibandingkan dengan bahasa pemrograman lainnya
  seperti java dan python
- Pointer digunakan untuk mengakses memori dan memanipulasi alamat
- Pointer berguna mentransfer data yang berkapasitas besar melalui fungsi. Pointer sangat erat
  kaitannya dengan array, sehingga variabel pointer dapat menggantikan fungsi dan variabel array

Operator Direference/Indirection
  - Operator Direference/Indirection (*) digunakan untuk mendapatkan nilai pada alamat tertentu.
  - Operator Inditrection (*) adalah komponen dari operator alamat (&)
  - Jika (&) akan menghasilkan alamat variabel dari variabel lain, (*) akan menghasilkan isi nilai dari
    variabel lain
*/

#include <iostream>
using namespace std;

int main(){
    string nama = "Fahri Rahmat Fauzi";
    cout << nama << " berada pada alamt: " << &nama << endl;

    string *ptrNama = &nama;

    cout << "ptrNama: " << ptrNama << endl;
    cout << "Nilai dari alamat ptrNama: " << *ptrNama << endl << endl;

    // Manipulasi nilai dari varibel nama
    *ptrNama = "ArtSkie";
    cout << "Nilai pada variabel nama: " << nama << endl;
    cout << "Nilai pada alamat nama: " << *ptrNama << endl;

    cout << endl;

    int nilai = 5;
    int *ptrNilai = &nilai;
    cout << "Nilai pada varibel nilai: " << nilai << endl;
    cout << "Alamat memori pada varibel nilai: " << ptrNilai << endl;

    // Manipulasi nilai pada variabel nilai
    (*ptrNilai)++;
    cout << "Alamat memori pada variabel nilai: " << ptrNilai << endl;
    cout << "Isi dari varibel nilai: " << nilai << endl;
}

/*
Kesimpulan
 - Lokasi pada memori komputer memiliki alamat dan menyimpan data/nilai
 - Alamat atau address yang dimaksud bernilai numerik (umumnya dalam bentuk hexadesimal)
 - Pointer adalah variabel yang menyimpan alamat memori dari variabel lain
 - Pointer digunakan untuk mengakse memori dan memanipulasi alamat
 - Tidak hanya mengakses dan memanupulasi alamat. Dengan pointer kita juga bisa
   memanipulasi nilai variabel lain.
*/