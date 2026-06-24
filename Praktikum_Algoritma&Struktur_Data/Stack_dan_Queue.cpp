#include <iostream>
#define max 5
using namespace std;

string stackData[max];
int top = -1;

string dataQueue[max];
int front = -1, rear = -1;


// Cek apakah kosong?
bool isEmptyStack(){
    return top == -1;
}

// Cek apakah penuh
bool isFullStack(){
    return top == max -1;
}

// Push
void pushStack (string aktivitas){
    if(isFullStack()){
        cout << "Stack Penuh!\n";
    } else {
        top ++;
        stackData[top] = aktivitas;
    }
}

// Pop
void popStack (){
    if(isEmptyStack()){
        cout << "Stack Kosong!\n";
    } else {
        cout << "Data Keluar : " << stackData[top] << endl;
        top --;
    }
}

// Peek
void peekStack (){
    if(isEmptyStack()){
        cout << "Stack Kosong!\n";
    } else {
        cout << "Aktivitas Terakhir : " << stackData[top] << endl;
    }
}

// Tampilkan isi stack
void viewStack(){
    if (isEmptyStack()){
        cout << "Stack Kosong!\n";
    } else {
        cout << "Isi Stack:\n";
        for (int i = top; i >= 0; i--){
        cout << "- " << stackData[i] << endl;
        }
    }
}

// Cek apakah kosong?
bool isEmptyQueue(){
    return front == -1;
}

// Cek apakah penuh?
bool isFullQueue(){
    return rear == max -1;
}

// Enqueue
void enqueue(string nama){
    if(isFullQueue()){
        cout << "Queue Penuh!\n";
    } else {
        if(isEmptyQueue()){
            front = 0;
        }
        rear ++;
        dataQueue[rear] = nama;
    }
}

// Dequeue
void dequeue(){
    if(isEmptyQueue()){
        cout << "Queue Kosong!\n";
    } else {
        cout << "Keluar : " << dataQueue[front] << endl;
        front ++;

        if(front > rear){
            front = rear = -1; // Reset
        }
    }
}

// Peek
void peekQueue(){
    if(isEmptyQueue()){
        cout << "Queue Kosong!\n";
    } else {
        cout << "Antrian Depan : " << dataQueue[front] << endl;
    }
}

// View Queue
void viewQueue(){
    if(isEmptyQueue()){
        cout << "Queue Kosong!\n";
    } else {
        cout << "Isi Queue : ";
        for(int i = front; i <= rear; i++){
            cout << "- " << dataQueue[i] << endl;
        }
    }
}

int main(){
    // Simulasi
    pushStack ("Login");
    pushStack ("Buka File");
    pushStack ("Compile");
    pushStack ("Run Program");

    peekStack(); // Tampilkan aktivitas terakhir

    popStack();
    popStack();

    viewStack();
    cout << endl << endl;

    // Simulasi
    enqueue ("Andi");
    viewQueue();

    enqueue ("Budi");
    viewQueue();

    enqueue ("Citra");
    viewQueue();

    peekQueue();

    dequeue();
    viewQueue();

    enqueue ("Dina");
    viewQueue();

    return 0;
}