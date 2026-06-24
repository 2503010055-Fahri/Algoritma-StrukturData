#include <iostream>
using namespace std;

// Create struct data stasiun
struct Stasiun {
    // Data yang di simpan
    string nama;
    Stasiun* next;
};

// data awal
Stasiun* head = NULL;

// Tambah data di akhir
void tambahStasiun(string nama){
    Stasiun* baru = new Stasiun();

    baru->nama = nama;
    baru->next = NULL;

    if(head == NULL){
        head = baru;
        return;
    }
    // nilai sementara
    Stasiun* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = baru;
}

// Menampilkan data
void dataStasiun(){
    Stasiun* temp = head;
    int no = 1;

    // ketika head itu tidak kosong
    while(temp !=  NULL){
        cout << no++ << ". Stasiun " << temp->nama << endl;
        temp = temp->next;
    }
}

// Menghapus stasiun pertaman
void deleteStasiun(){
    if(head == NULL){
        cout << "Tidak ada stasiun yang dapat dihapus.\n";
        return;
    }
    // Ketika ada data stasiun
    cout << "Stasiun " << head->nama << " sedang dalam perbaikan.\n";

    Stasiun* hapus = head;
    head = head->next;

    delete hapus;
}

// Mencari stasiun
void searchStasiun(string search){
    Stasiun* temp = head;

    // ketika data tidak kosong
    while(temp != NULL){
        if(temp->nama == search){
            cout << "Stasiun " << search << " ditemukan.\n";
            return;
        }
        temp = temp->next;
    }
    cout << "Stasiun " << search << " tidak ditemukan.\n";
}

// Menghitung jumlah stasiun
void amountStasiun() {
    int amount = 1;
    Stasiun* temp = head;

    // ketika data tidak kosong
    while(temp != NULL){
        amount++;
        temp = temp->next;
    }
    cout << "Jumlah Stasiun = " << amount << endl;
}

int main(){
    // Data Stasiun
    cout << "==== DATA STASIUN ====\n";
    tambahStasiun("Lebak Bulus");
    tambahStasiun("Bekasi");
    tambahStasiun("Bandung");
    tambahStasiun("Jakarta");
    tambahStasiun("Tasikmalaya");
    tambahStasiun("Yogyakarta");
    dataStasiun();

    cout << endl;
    // hapus stasiun pertama
    cout << "==== STASIUN DALAM PERBAIKAN ====\n";
    deleteStasiun();

    cout << endl;
    // Cari stasiun
    cout << "==== STASIUN YANG DICARI ====\n";
    searchStasiun("Tasikmalaya");

    cout << endl;
    // Hitung jumlah stasiun
    amountStasiun();
}