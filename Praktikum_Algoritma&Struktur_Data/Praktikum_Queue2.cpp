/* #include <iostream>
#include <queue>
using namespace std;

int main(){
    queue <string> antrian;
    int pilihan;
    string namaPasien;
    
    do {
        cout << "\n1. Tambah pasien\n";
        cout << "2. Memanggil pasien\n";
        cout << "3. Lihat antrian depan\n";
        cout << "4. Tampilkan semua antrian\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu : ";

        cin >> pilihan;
        cin.ignore();

        switch (pilihan)
        {
        case 1:
        system("cls");
            cout << "Masukan nama pasien: ";
            getline(cin, namaPasien);
            antrian.push(namaPasien);
            break;

        case 2:
            if (!antrian.empty()) {
                cout << "Memanggil: " << antrian.front() << endl;
                antrian.pop();
            } else {
                cout << "Antrian kosong!\n";
            }
            break;

        case 3:
            if (!antrian.empty()) {
                cout << "Pasien terdepan: " << antrian.front() << endl;
            } else {
                cout << "Antrian kosong!\n";
            }
            break;

        case 4: {
            cout<<"\nDaftar Antrian : \n";
            queue<string> salinan = antrian;
            while(!salinan.empty()){
                cout<<"- "<<salinan.front()<<endl;
                salinan.pop();
            }
            break;
        }
        
        case 5: 
            cout << "Kluar\n";
            break;

        default:
            cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 5);

    return 0;
} */

#include <iostream>
#include <queue>
using namespace std;

int main(){
    // Membuat Variabel
    int pilih;
    queue <string> antrian;
    string nama;

    // Memilih Menu
    do {
        cout << "1. Tambah Antrian\n";
        cout << "2. Panggil Antrian Terdepan\n";
        cout << "3. Lihat Antrian Terdepan\n";
        cout << "4. Lihat Semua Antrian\n";
        cout << "5. Exit\n";
        cout << "Pilih Menu : ";

        cin >> pilih;
        cin.ignore();

        // Apa yang mau dipilih dari menu?
        switch(pilih) {
            // Jika pilih 1 maka akan menambahkan antrian (Enqueue)
            case 1:
                cout << "Masukan Nama : ";
                getline(cin, nama);
                antrian.push(nama);
                system("cls");
                break;
            
            // Jika pilih 2 maka akan memanggil antrian paling depan dan mengeluarkannya (Dequeue)
            case 2:
                if(!antrian.empty()){
                    cout << "Memanggil Antrian Terdepan : " << antrian.front() << endl;
                    antrian.pop();
                } else {
                    // Jika antrian kosong
                    cout << "Antrian Kosong!\n";
                }
                break;

            // Jika pilih 3, Apabila antrian itu tidak kosong, tampilkan antrian pertama
            case 3:
                if(!antrian.empty()){
                    cout << "Antrian Terdepan : " << antrian.front() << endl;
                } else {
                    // Jika antrian kosong
                    cout << "Antrian Kosong!";
                }
                break;

            // Jika pilih 4, maka akan menampilkan isi Queue tanpa merubah data asli
            case 4: {
                cout << "Semua Antrian : \n";
                queue <string> view = antrian;
                while(!view.empty()){
                    cout << "- " << view.front() << endl;
                    view.pop();
                }
                break;
            }

            // Keluar dari program
            case 5:
                cout << "Exit\n";
                break;

            default:
                cout << "Pilihan Tidak Valid!\n";
        }
    } while(pilih != 5);
}