#include <iostream>
using namespace std;

#define max 5
string data[max];
int top = 0;

// apakah penuh?
bool isFull(){
    if(top >= max){
        return true;
    } else {
        return false;
    }
}

// apakah data dalam antrian itu kosong atau tidak?
bool isEmpty(){
    if(top == 0){ 
        return true;
    } else {
        return false;
    }
}

// menampilkan data, jika antrian tidak kosong
void view(){
    if(!isEmpty()){
        cout << "Data Antrian : " << endl;
        for(int a = top-1; a >= 0; a--){
            cout << a+1 << ". " << data[a] << endl;
        }
        // jika data antrianya kosong
    } else {
        cout << "Antrian Kosong" << endl;
    }

    // jika antrian penuh
    if(isFull()){
        cout << "Antrian Penuh" << endl;
    }
    cout << endl;
}

// jika tidak penuh, maka bisa input data
void enqueue(){
    if(!isFull()){
        cout << "Mauskan Data : ";
        cin >> data[top];
        top++;
    }
}

// jika antrian itu tidak kosong, maka antrian data yang belakang akan digeser kedepan (data ke-1 hapus, data ke-2 kjadi ke-1)
void dequeue(){
    if(!isEmpty()){
        for(int a = 0; a < top-1; a++){
            data[a] = data[a+1];
        }
        top--;
    }
}

int main(){
    // pemilihan menu, DEQUEUE atau ENQUEUE
    int pil;
    string isi;

    queue:
        system("cls");
        view();
        cout << "Menu Utama\n1. Enqueue\n2. Dequeue\n pilihan : ";
        cin >> pil;

        if(pil == 1){
            system("cls");
            //cout << "Enqueue" << endl;
            enqueue();
            goto queue;
        } else if(pil == 2){
            system("cls");
            //cout << "Dequeue" << endl;
            dequeue();
            goto queue;
        }
}