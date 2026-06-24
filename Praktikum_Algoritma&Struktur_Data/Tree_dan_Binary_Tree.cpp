/*
1. Konsep Tree
    - Konsep Structur data yang terdiri dari akar dan simpul-simpul yang berada
      dibawahnya
    - Structur data yang menunjukan hubungan bertingkat(memiliki hirarki)
    - Merupakan structur data yang tidak linear yang digunakan untuk mempersentasikan
      data yang bersifat hirarki antar elemen-elemenya.

2. Level & Derajat pada Tree
      - Level                 - Derajat
        Kakek     -> 0 |         Kakek      -> 2
    Bapak - Paman -> 1 |    Bapak - Paman   -> 1
Saya - Adik       -> 2 | saya - adik        -> 0

3. Istilah dan hubungan komponen Tree
    - Node(simpul)           -> simpul dari masing-masing data dari suatu Tree
    - Predecessor(Pendahulu) -> node yang berada diatas node tertentu
    - Successor(penerus)     -> node yang berada dibawah node tertentu
    - Ancestor(Leluhur)      -> seluruh node yang terletak sebelmun node tertentu dan terletak pada jalur yang sama
    - Descendant(keturunan)  -> seluruh node yang terletak setelah node tertentu dan terletak pada jalur yang sama
    - Parent(ayah)           -> Predecessor satu level diatas suatu node
    - Child(anak)            -> Successor satu level dibawah suatu node
    - Sibling(saudara)       -> node-node yang memiliki parent yang sama
    - Height                 -> banyaknya tingkatan dari suatu Tree
    - Root(akar)             -> node khusus yang tidak memiliki Predecessor
    - Leaf(daun)             -> node-node dalam Tree yang tidak memiliki Successor
    - Degree                 -> banyaknya Child dalam suatu node
    - Forest(hutan)          -> kumpulan dari Tree
    - Depth(kedalaman)       -> hasil tingkat node maksimum dikurang satu (level dari node x)

4. Definisi Tree
    - Sebuah Tree yang didefinisikan sebagai structur yang dibentuk secara rekursif oleh aturan berikut.
        - Sebuah node adalah sebuah Tree. Node satu-satunya pada Tree ini berfungsi sebagai root maupun leaf
        - dari K buah Tree T1 ~ Tk, dan masing-masing memiliki root N1 ~ NK;
        - jika node n adalah parent dari N1 ~ Nk, akan diperoleh sebuah Tree baru T yang memiliki root N.
          Dalam kondisi ini, Tree T1 ~ TK, menjadi subtree dari Tree T.

        T : Tree
        N : Node
        K : Banyak

5. Ordered & Unordered Tree
    1. Ordered Tree
        - Antar sibling terdapat urutan "usia".
        - Node yang paling kiri berusia paling tua, sedangkan node yang paling kanan
          berusia paling muda.
        - Posisi node diatur atas urutan tertentu.

                           KAKEK (80)
                             |
                        BAPAK (60) - PAMAN (55)
                          |
                SAYA (20) - ADIK (10)

    2. Unordered Tree
        - Antar sibling tidak terdapat urutan tertentu.

                            KEPSEK
                               |      
                    WAKA.KUR.. - WAKA.KES..
                        |
              KAPRODI 1 - KAPRODI 2                         

6. Konsep Binary Tree
    - Binary adalah Tree dengan syarat bahwa tiap node boleh memiliki maksimal dua subTree dan kedua subTree harus terpisah.
    - Binary Tree boleh tidak memiliki Child ataupun subTree.
    - Boleh hanya memiliki subTree sebelah kiri(left subTree)
    - Boleh hanya memiliki subTree sebelah kana(right subTree)
    - Boleh hanya memiliki subTree sebelah kanan dan kiri

7. Jenis-jenis Binary Tree
    1. Full Binary Tree     : Binary Tree yang tiap node nya (kecuali leaf) memiliki dua Child
                              dan tiap subTree mempunyai panjang patch yang sama.
    2. Complete Binary Tree : Binary Tree yang mirip dengan Full Binary Tree, namun setiap subTree
                              boleh memiliki panjang patch yang berbeda.
    3. Skewed Binary Tree   : Binary Tree yang semua nodenya (kecuali left) hanya memliki satu Child.

8. Tree Tranversal
    - Teknik menyusuri tiap node dalam sebuah Tree secara sistematis, sehingga semua node dapat dan hanya
      satu kali saja dikunjungu.
      - Ada tiga cara Tranversal:
        1. preOrder.
            - kunjungi root nya
            - telusuri subTree kiri
            - telusuri subTree kanan
        2. inOrder.
            - telusuri subTree kiri
            - kunjungi root nya
            - telusuri subTree kanan
        3. postOrder.
            - telusuri subTree kiri
            - telusuri subTree kanan
            - kunjungi root nya

9. Operasi pada Tree
    - Create        -> digunakan untuk membentuk Binary Tree baru yang masih kosong.
    - Clear         -> digunakan untuk mengosongkan Binary Tree yang sudah ada atau menghapus semua node
                       pada Binary Tree.
    - Empty         -> digunakan untuk memeriksa apakah Binary Tree masih kosong atau tidak.
    - Insert        -> digunakan untuk memasukan sebuah node kadalam Tree.
    - Find          -> digunakan untuk mencari root, parent, left, child, atau right child dari suatu node
                       dengan syarat Tree tidak boleh kodong.
    - Update        -> digunakan untuk mengubah isi dari node yang ditunjuk oleh pointer current dengan syarat
                       Tree tidak boleh kosong.
    - Retrieve      -> digunakan untuk mengetahui isi dari node yang ditunjuk oleh pointer current dengan syarat
                       tidak boleh kosong.
    - Delete Sub    -> digunakan untuk menghapus sebuah subTree (node beserta descentdan-nya) yang ditunjuk pointer
                       current dengan syarat Tree tidak boleh kosong.
    - Charateristic -> digunakan untuk mengetahui karakteristik dari suatu Tree. Yakni size, height, serta avg lenght-nya.
    - Tranverse     -> digunakan untuk mengunjungi seluruh node-node pada Tree dengan cara Tranversal.
*/

#include <iostream>
using namespace std;

// Creat struct Node
struct Node {
    char label;
    Node *left, *right, *parent;
};

// Variabel global
Node *root, *newNode;

// Buat funsi create Tree
void createNewTree( char label ){
    if( root != NULL ){
        cout << "\nTree sudah dibuat!";
    } else {
        root = new Node();
        root->label = label;
        root->left = NULL;
        root->right = NULL;
        root->parent = NULL;
        cout << "\nNode " << label << " berhasil dibuat menjadi root." << endl;
    }
}

// Insert left
Node *insertLeft( char label, Node *node ){
    if( root == NULL ){
        cout << "\nBuat tree terlebih dahulu!" << endl;
        return NULL;
    } else {
        // cek apakah anak kiri ada atau tidak
        if( node->left != NULL){
            // kalau ada
            cout << "\nNode" << node->label << " sudah ada anak kiri!" << endl;
            return NULL;
        } else {
            // kalau tidak ada
            newNode = new Node();
            newNode->label = label;
            newNode->left = NULL;
            newNode->right = NULL;
            newNode->parent = node;
            node->left = newNode;
            cout << "\nNode " << label << " berhasil ditambahkan keanak kiri " << newNode->parent->label << endl;
            return newNode;
        }
    }
}

// Insert Right
Node *insertRight( char label, Node *node ){
    if( root == NULL ){
        cout << "\nBuat tree terlebih dahulu!" << endl;
        return NULL;
    } else {
        // cek apakah anak kanan ada atau tidak
        if( node->right != NULL){
            // kalau ada
            cout << "\nNode" << node->label << " sudah ada anak kanan!" << endl;
            return NULL;
        } else {
            // kalau tidak ada
            newNode = new Node();
            newNode->label = label;
            newNode->left = NULL;
            newNode->right = NULL;
            newNode->parent = node;
            node->right = newNode;
            cout << "\nNode " << label << " berhasil ditambahkan keanak kanan " << newNode->parent->label << endl;
            return newNode;
        }
    }
}

// Empty
bool Empty(){
    if( root == NULL ){
        return true;
    } else {
        return false;
    }
}

// Update
void update( char label, Node *node ){
    if( root == NULL ){
        cout << "\nBuat Tree terlebih dahulu!" << endl;
    } else {
        if( node == NULL){
            cout << "\nNode yang ingin diganti tidak ada!" << endl;
        } else {
            char temp = node->label;
            node->label = label;
            cout << "\nLabel node " << temp << " berhasil diubah menjadi " << label << endl;
        }
    }
}

// Retrieve
void Retrieve( Node *node ){
    if( root == NULL ){
        cout << "\nBuat tree terlebih dahulu!" << endl;
    } else {
        if( node == NULL ){
            cout << "\nNode yang ditunjuk tidak ada!" << endl;
        } else {
            cout << "\nLabel Node : " << node->label << endl;
        }
    }
}

// Find
void Find( Node *node ){
    if( root == NULL ){
        cout << "\nBuat tree terlebih dahulu!" << endl;
    } else {
        if( node == NULL ){
            cout << "\nNode yang ditunjuk tidak ada!" << endl;
        } else {
            cout << "\nLabel Node : " << node->label;
            cout << "\nRoot Node : " << root->label << endl;
            // parent
            if( node->parent == NULL ){
                cout << "Parent Node : (tidak punya orang tua)" << endl;
            } else {
                cout << "Parent Node : " <<  node->parent->label << endl;
            }

            // Sibling
            if( node->parent != NULL && node->parent->left != node && node->parent->right == node ){
                cout << "Saudara : " << node->parent->left->label << endl;
            } else if( node->parent != NULL && node->parent->right != node && node->parent->left == node ){
                cout << "Saudara : " << node->parent->right->label << endl;
            } else {
                cout << "tidak punya saudara" << endl;
            }

            // left
            if( node->left == NULL ){
                cout << "Anak Kiri Node : (tidak punya anak kiri)" << endl;
            } else {
                cout << "Anak Kiri Node : " << node->left->label << endl;
            }

            // right
            if( node->right == NULL ){
                cout << "Anak Kanan Node : (tidak punya anak kanan)" << endl;
            } else {
                cout << "Anak Kanan Node : " << node->right->label << endl;
            }
        }
    }
}

// Tranversal
// 1. PreOder
void preOrder( Node *node = root ){
    if( root == NULL ){
        cout << "\nBuat tree terlebih dahulu!" << endl;
    } else {
        if( node != NULL ){
            cout << node->label << ", ";
            preOrder(node->left);
            preOrder(node->right);
        }
    }
}

// 2. inOrder
void inOrder( Node *node = root ){
    if( !root ){
        cout << "\nBuat tree terlebih dahulu!" << endl;
    } else {
        if( node != NULL ){
            inOrder(node->left);
            cout << node->label << ", ";
            inOrder(node->right);
        }
    }
}

// 3. PostOrder
void postOreder( Node *node = root ){
    if( !root ){
        cout << "\nBuat tree terlebih dahulu!";
    } else {
        if( node != NULL ){
            postOreder(node->left);
            postOreder(node->right);
            cout << node->label << ", ";
        }   
    }
}

// deleteTree
void deleteTree( Node *node ){
    if( !root ){
        cout << "\nBuat tree terlebih dahulu!";
    } else {
        if( node != NULL ){
            deleteTree(node->left);
            deleteTree(node->right);
            node->parent->left = NULL;
            node->parent->right = NULL;
            delete node;
        }   
    }
}

// delete Sub
void deleteSub( Node *node ){
    if( !root ){
        cout << "\nBuat tree terlebih dahulu!";
    } else {
        deleteTree(node->left);
        deleteTree(node->right);
        cout << "\nSubtree node " << node->label << " berhasil dihapus" << endl; 
    }
}

int main(){

    createNewTree('A');

    Node *nodeB, *nodeC, *nodeD, *nodeE, *nodeF, *nodeG, *nodeH, *nodeI, *nodeJ;

    nodeB = insertLeft('B', root);
    nodeC = insertRight('C', root);
    nodeD = insertLeft('D', nodeB);
    nodeE = insertRight('E', nodeB);
    nodeF = insertLeft('F', nodeC);
    nodeG = insertLeft('G', nodeE);
    nodeH = insertRight('H', nodeE);
    nodeI = insertLeft('I', nodeG);
    nodeJ = insertRight('J', nodeG);

    cout << "Tree Empty? : " << Empty() << endl;

    update('Z', nodeC);
    update('C', nodeC);

    Retrieve(nodeC);

    Find(nodeE);

    cout << endl;
    cout << "Pre Order : ";
    preOrder(nodeE);

    cout << endl;
    cout << "InOrder : ";
    inOrder(nodeE);

    cout << endl;
    cout << "PostOrder : ";
    postOreder(nodeE);

    cout << endl;

    deleteSub(nodeE);
    cout << "\nPreOrder : " << endl;
    preOrder();
    cout << "\n" << endl;
}