#include <iostream>
using namespace std;


struct Node {
    string data;
    Node* next;
    Node* prev;
};

// NULL <- Node 1 -> Node 2 -> <- Node 3 -> NULL

Node* head = NULL;

// Input data di depan
void insertFirst( string nama ){
    Node* baru = new Node();

    baru->data = nama;
    baru->next = head;
    baru->prev = NULL;

    if( head != NULL ){
        head->prev = baru;
    }

    head = baru;
}

// insert belakang
void insertLast( string nama ){
    Node* baru = new Node();

    baru->data = nama;
    baru->next = NULL;

    if( head == NULL ){
        baru->prev = NULL;
        head = baru;
        return;
    }

    Node* temp = head;

    while( temp->next != NULL ){
        temp = temp->next;
    }

    temp->next = baru;
    baru->prev = temp;
}

// Tampil maju
void tampilMaju(){
    Node* temp = head;

    while( temp != NULL ){
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Tampil Mundur
void tampilMundur(){
    Node* temp = head;

    while( temp->next != NULL ){
        temp = temp->next;
    }
    while( temp != NULL ){
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
}



int main(){
    insertFirst("Bahlil");
    insertFirst("jajang");
    insertLast("Agus");
    insertLast("Dani");

    cout << "Tampil maju   : ";
    tampilMaju();

    cout << "Tampil mundur : ";
    tampilMundur();
}