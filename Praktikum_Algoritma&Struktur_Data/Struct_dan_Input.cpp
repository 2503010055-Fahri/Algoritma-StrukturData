#include <iostream>
using namespace std;

struct mahasiswa {
    string nama, nim, kelas;
    float nilai;
};

int main(){
    mahasiswa mhs[5]; // Struct of array max 5
    int n; // Untuk input jumlah dari mahasiswa (1-5)

    // Input jumlah mahasiswa
    cout << "Jumlah Mahasiswa : ";
    cin >> n;

    if (n < 1 || n >5){
        cout << "Jumlah Tidak Valid!\n";
        return 0;
    }

    // Input data mahasiswa
    for(int a = 0; a < n; a++){
        cout << "\nData Mahasiswa Ke-" << a + 1 << endl;

        cout << "Masuka NIM : ";
        cin >> mhs[a].nim;

        cout << "Masukan Nama : ";
        cin.ignore();
        getline(cin, mhs[a].nama);

        cout << "Kelas : ";
        cin >> mhs[a].kelas;

        cout << "Nilai : ";
        cin >> mhs[a].nilai;
    }

    cout << endl;
    // Tampilkan data mahasiswa yang telah di input
    cout << "====== Data Mahasiswa ======\n";
    cout << "NO | NIM        | Nama  | Kelas | Nilai\n";
    cout << "---------------------------------------\n";

    for(int a = 0; a < n; a++){
        cout << a + 1 << "  | "
             << mhs[a].nim << " | "
             << mhs[a].nama << " | "
             << mhs[a].kelas << " | "
             << mhs[a].nilai << "  | " << endl;
    }

    // Analisi Data
    // Nilai Tertinggi
    int nilaiMax = 0;
    for(int a = 0; a < n; a++){
        if(mhs[a].nilai > mhs[nilaiMax].nilai){
            nilaiMax = a;
        }
    }

    // Tampilkan mahasiswa dengan nilai tertinggi
    cout << "\nMahasiswa dengan nilai tertinggi : \n";
    cout << mhs[nilaiMax].nama << " dengan nilai: " << mhs[nilaiMax].nilai << endl;

    // Nilai rata-rata
    float totalNilai = 0;

    for(int a = 0; a < n; a++){
        totalNilai += mhs[a].nilai;
    }

    float nilaiAvg = totalNilai / n;
    cout << "Rata-rata nilai : " << nilaiAvg << endl;

    // Mencari kelas dari mahasiswa
    string cariKelas;
    cout << "\nMasukan Kelas yang mau dicari : ";
    cin >> cariKelas;


    bool ditemukan = false;

    for(int a = 0; a < n; a++){
        if(mhs[a].kelas == cariKelas){
            cout << "- " << mhs[a].nama << endl;
            ditemukan = true;
        }
    } if(!ditemukan){
        cout << "Tidak ada mahasiswa dikelas tersebut!";
    }
}