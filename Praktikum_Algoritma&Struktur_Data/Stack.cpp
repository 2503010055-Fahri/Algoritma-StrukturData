#include <iostream>
using namespace std;

#define max 5
string data[max];
int top = 0;

// apakah data tersebut kopsong?
bool isEmpty(){
    if(top == 0){
        return true;
    } else {
        return false;
    }
}

// apakah data tersebut penuh? jika penuh maka akan true, jika tidak dia akan melakukan push
bool isFull(){
    if(top >= max){
        return true;
    } else {
        return false;
    }
}

// jika data tidak penuh, push data
void push(){
    if(!isFull()){
        cout << "Masukan Data : ";
        cin >> data[top];
        top++;
    }
}

// jika data tidak kosong, pop data
void pop(){
    if(!isEmpty()){
        top--;
    }
}

// menampilkan data apakah bertambah atau tidak kedalam array
void display(){
    if(!isEmpty()){
        cout << "Data Tersimpan : " << endl;
        for(int a = 0; a < top; a++){
            cout << a+1 << ". " << data[a] << endl;
        } // jika array kosong
    } else {
        cout << "Data Tidak Tersedia !" << endl;
    }

    // jika array penuh
    if(isFull()){
        cout << "Stack Penuh !" << endl;
    }
    cout << endl;
}


int main(){
    int pil;
    string isi;

    stack:
        system("cls");
        display();
        cout << "Menu Utama\n1. Push\n2. Pop\nPilih : ";
        cin >> pil;

    if(pil == 1){
        system("cls");
        push();
        goto stack;
    } else if(pil == 2){
        pop();
        goto stack;
    }
    system("cls");
    cout << "Program Selesai";
}