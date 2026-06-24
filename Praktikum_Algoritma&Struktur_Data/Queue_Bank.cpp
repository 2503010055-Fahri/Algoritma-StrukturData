/*
    PROGRAM ANTRIAN NASABAH BANK

    1. Membuat pilihan menu (Mengambil no antrian, Panggil nasabah, Lihat antrian, Keluar)
    2. Switch 1 (Input nama nasabah) Enqueue
    3. Switch 2 (Memanggil nasabah yg pertama masuk) Dequeue
    4. switch 3 (Lihat semua antrian dalam data queue)
    5. switch 4 (Keluar dari program)
*/

#include <iostream>
#include <queue>
using namespace std;

int main(){
    // Membuat variabel
    int pilihan;
    string namaNasabah;
    queue <string> antrianNasabah;
    // Pilihan menu
    do {
        cout << "\n=== Sistem Antrian Nasabah BANK ===\n";
        cout << "1. Ambil Nomor Antrian\n"; // Enqueue 
        cout << "2. Panggil Nasabah\n"; // Dequeue
        cout << "3. Lihat Antrian\n"; // Cek apakah antrian kosong atau tidak
        cout << "4. Keluar Program\n"; // Program berhenti
        cout << "Pilih Menu : ";

        // Input menu
        cin >> pilihan;
        cout << endl;
        // Looping dan cek kondisi antrian
        switch(pilihan){
            case 1: // Menambahkan data antrian Enqueue
                system("cls");
                cout << "Masukan Nama Nasabah : ";
                cin >> namaNasabah;
                antrianNasabah.push(namaNasabah);
                break;
            
            case 2: // Mengecek apakah antrian itu kosong atau tidak
                if(!antrianNasabah.empty()){ // Jika antrian penuh maka keluarkan nasabah ke-1 (pop)
                    cout << "Panggil Nasabah : " << antrianNasabah.front() << endl;
                    antrianNasabah.pop();
                } else { // jika antrian itu kosong
                    cout << "Antrian Kosong!";
                }
                break;

            case 3: { // Melihat semua data antrina dalam queue
                cout << "Jumlah Antrian Saat Ini : " << endl;
                queue <string> view = antrianNasabah;
                while(!view.empty()){
                    cout << "- " << view.front() << endl;
                    view.pop();
                }
                break;
            }

            case 4: // Program selesai
                cout << "Keluar Program" << endl;
                break;
            default:
                cout << "Pilihan Tidak Valid!";
        }
    } while(pilihan != 4);
}