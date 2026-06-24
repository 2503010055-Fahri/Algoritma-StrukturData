/* - Double Lingked List merupakan suatu Linked List yang memiliki
     dua variabel pointer. Dimana pointer tersebut menunjuk ke node
     sebelum dan selanjutnya

   - Double Linked List terdiri dari sejumlah elemen (node) dimana
     setiap node memiliki penunjuk prev (menunjuk node sebelumnya)
     dan next (menunjuk node selanjutnya).

   - Penunjuk prev pada node head menunjuk ke NULL, menandakan bahwa node head (node awal)
   - Penunjuk next pada node tail menunjuk ke NULL, menandakan bahwa node tail (node akhir)
*/

#include <iostream>
using namespace std;

// Deklarasi Double Linked List
struct DataUser {
    string nama, username, email, password;
    DataUser *prev, *next;
};

// Variabel global
DataUser *head, *tail, *cur, *newNode, *del, *afterNode;

// Fungsi pembuatan Double Linked List
void createDoubleLinkedList( string data [4] ){
    head = new DataUser();
    head->nama = data[0];
    head->username = data[1];
    head->email = data[2];
    head->password = data[3];
    head->prev = NULL;
    head->next = NULL;
    tail = head;
}

// count Double Linked List
int countDoubleLinkedList(){
    // cek apaka double linked list sudah di buat
    if( head == NULL ){ // jika belum dibuat
        cout << "Double Linked List belum dibuat!"; // print
    // jika double linked list dibuat
    } else {
        cur = head;
        int jumlah = 0;
        while( cur != NULL ){
            jumlah++;
            // step
            cur = cur->next;
        }
        return jumlah;
    }
}

//  Add First
void addFirst (string data [4] ){
    if( head == NULL ){
        cout << "Double Linked List belum dibuat!";
    } else {
        newNode = new DataUser();
        newNode->nama = data[0];
        newNode->username = data[1];
        newNode->email = data[2];
        newNode->password = data[3];
        newNode->prev = NULL;
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

//  Add Last
void addLast (string data [4] ){
    if( head == NULL ){
        cout << "Double Linked List belum dibuat!";
    } else {
        newNode = new DataUser();
        newNode->nama = data[0];
        newNode->username = data[1];
        newNode->email = data[2];
        newNode->password = data[3];
        newNode->prev = tail;
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
    }
}

// Add midle 
void addMidle( string data[4], int posisi ){
    if( head == NULL ){
        cout << "Double Linked List belum dibuat";
    } else {

        if( posisi == 1){
            cout << "Posisi 1 itu buan posisi tengah!" << endl;
        } else if ( posisi < 1 || posisi > countDoubleLinkedList() ){
            cout << "Posisi diluar jangkauan!" << endl;
        } else {
            newNode = new DataUser();
            newNode->nama = data[0];
            newNode->username = data[1];
            newNode->email = data[2];
            newNode->password = data[3];

            // Traversing
            cur = head;
            int nomor = 1;
            while( nomor < posisi -1){
                cur = cur->next;
                nomor++;
            }

            afterNode = cur->next;
            newNode->prev = cur;
            newNode->next = afterNode;
            cur->next = newNode;
            afterNode->prev = newNode;
        }
    }
}

// Remove First
void removeFirst(){
    if( head == NULL ){
        cout << "Double Linked List belum dibuat!";
    } else {
        del = head;
        head = head->next;
        head->prev = NULL;
        delete del;
    }
}

// Remove Last
void removeLast(){
    if( head == NULL ){
        cout << "Double Linked List belum dibuat!";
    } else {
        del = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete del;
    }
}

// Remove middle
void removeMiddle(int posisi){
    if( head == NULL ){
        cout << "Double Linked List belum dibuat!";
    } else {
        if( posisi == 1 || posisi == countDoubleLinkedList() ){
            cout << "Bukan posisi tengah!" << endl;
        } else if( posisi < 1 || posisi > countDoubleLinkedList() ){
            cout << "Posisi diluar jangkauan!" << endl;
        } else {
            int nomor = 1;
            cur = head;
            while( nomor < posisi -1 ){
                cur = cur->next;
                nomor++;
            }
            del = cur->next;
            afterNode = del->next;
            cur->next = afterNode;
            afterNode->prev = cur;
            delete del;
        }
    }
}

// Print Double Linked List
void printDoubleLinkedList(){
    // cek apaka double linked list sudah di buat
    if( head == NULL ){ // jika belum dibuat
        cout << "Double Linked List belum dibuat!"; // print
    // jika double linked list dibuat
    } else {
        cout << "Jumlah Data : " << countDoubleLinkedList() << endl;
        cout << "Isi Data : " << endl;
        cur = head;
        while( cur != NULL ){
            // print
            cout << "Nama User     : " << cur->nama << endl;
            cout << "Username User : " << cur->username << endl;
            cout << "Email User    : " << cur->email << endl;
            cout << "Password User : " << cur->password << endl << endl;
            // step
            cur = cur->next;
        }
    }
}

int main(){
    string newData[4] = {"Fahri Rahmat Fauzi", "Fahri RF", "fahri@gmail.com", "@Fahri"};
    createDoubleLinkedList(newData);

    string data2[4] = {"ArtskieTzy", "Artskie", "artskie@gmail.com", "@Artskie"};
    addFirst( data2 );

    string data3[4] = {"Otong Surotong", "Otong", "otong@gmail.com", "@Otong"};
    addLast( data3 );

    string data4[4] = {"Miftah", "Lemilion", "miftah@gmail.com", "@miftah"};
    addMidle(data4, 2);

    removeMiddle(2);

    printDoubleLinkedList();
}