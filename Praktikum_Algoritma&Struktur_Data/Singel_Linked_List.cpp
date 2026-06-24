#include <iostream>
using namespace std;

// Deklarasi template node untuk single linked list
struct Buku {
    // Data yang disimpan
    string judul, pengarang;
    int tahunTerbit;
    
    // pointer ke node berikutnya
    Buku *next;
};

// Variabel global
Buku *head, *tail, *cur, *newNode, *del; 

// Fungsi membuat single linked list pertama
void createSingleLinkedList(string judul, string pengarang, int TB){
    head = new Buku();
    head->judul = judul;
    head->pengarang = pengarang;
    head->tahunTerbit = TB;
    head->next = NULL;
    tail = head;
}

// Tambah awal single linked list
void addFirst(string judul, string pengarang, int TB){
    newNode = new Buku();
    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunTerbit = TB;
    newNode->next = head;
    head = newNode;
}

// Remove First
void removeFirst(){
    del = head;
    head = head->next;
    delete del;
}

// Remove last
void removeLast(){
    del = tail;
    cur = head;
    while( cur->next != tail ){
        cur = cur->next;
    } 
    tail = cur;
    tail->next = NULL;
    delete del;
}

// Tambah akhir single linked list
void addLast(string judul, string pengarang, int TB){
    newNode = new Buku();
    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunTerbit = TB;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

// Ubah awal single linked list
void changeFirst(string judul, string pengarang, int TB){
    head->judul = judul;
    head->pengarang = pengarang;
    head->tahunTerbit = TB;
}

// Ubah akhir single linked list
void changeLast(string judul, string pengarang, int TB){
    tail->judul = judul;
    tail->pengarang = pengarang;
    tail->tahunTerbit = TB;
}

// Fungsi menampilkan seluruh single linked list
void printSingleLinkedList(){
    cur = head;
    while( cur != NULL ){
        cout << "Judul Buku   : " << cur->judul << endl;
        cout << "Pengarang    : " << cur->pengarang << endl;
        cout << "Tahun Terbit : " << cur-> tahunTerbit << endl;

        cur = cur->next;
    }
}

int main(){
    // Node pertama
    cout << "Node Pertama" << endl;
    createSingleLinkedList("Introduction to Algorithems", "Thomas H.Cormen", 1990);
    printSingleLinkedList();

    cout << endl << endl;

    // Tambah node pertama
    cout << "Tambah Node Pertama" << endl;
    addFirst("Makanya Mikir", "Abigail & Cania", 2025);
    printSingleLinkedList();

    cout << endl << endl;

    // Tambah node akhir
    cout << "Tabah Node Akhir" << endl;
    addLast("Prinsipil Ekonomi", "Ferry Irwandi", 2025);
    printSingleLinkedList();

    cout << endl << endl;

    // Remove first
    cout << "Remove First" << endl;
    removeFirst();
    printSingleLinkedList();

    cout << endl << endl;

    // Tambah lagi node pertama
    cout << "Tambah lagi node pertama" << endl;
    addFirst("Warren Buffet Minset", "Warren Buffet", 2017);
    printSingleLinkedList();

    cout << endl << endl;

    // Remove last
    cout << "Remove Last" << endl;
    removeLast();
    printSingleLinkedList();

    cout << endl << endl;

    // Changes Firs
    cout << "Changes First" << endl;
    changeFirst("Makanya Mikir", "Abigail & Cania", 2025);
    printSingleLinkedList();

    cout << endl << endl;

    // Changes Last
    cout << "Changes Last" << endl;
    changeLast("Prinsipil Ekonomi", "Ferry Irwandi", 2026);
    printSingleLinkedList();
}