// BST
// Data pertama = root
// Lebih kecil = ke kiri
// Lebih besar = ke kanan

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* Left;
    Node* Right;
};

// Membuat node baru
Node *createNode( int nilai ) {
    Node *baru = new Node();
    baru->data = nilai;
    baru->Left = NULL;
    baru->Right = NULL;
    return baru;
}

// Insert data ke BST
Node *insertTree( Node *root, int nilai ) {

    if( root == NULL ) {
        return createNode( nilai );
    }

    if ( nilai < root->data ) {
        root->Left = insertTree(root->Left, nilai);
    }
    else if (nilai > root->data) {
        root->Right = insertTree(root->Right, nilai);
    }

    return root;
}

// Lihat pohon
void printTree( Node* root, int space = 0 ) {
    if( root == NULL ){
        return;
    }

    space += 8;
}

// Main Program
int main() {

    Node *root = NULL;

    int dataNilai[] = {80, 50, 90, 30, 60, 85, 95};
    int jumlahData = sizeof(dataNilai) / sizeof(dataNilai[0]);

    cout << "Membangun BST" << endl;

    for(int i = 0; i < jumlahData; i++){
        cout << "Insert: " << dataNilai[i] << endl;
        root = insertTree(root, dataNilai[i]);
    }
    
    return 0;
}