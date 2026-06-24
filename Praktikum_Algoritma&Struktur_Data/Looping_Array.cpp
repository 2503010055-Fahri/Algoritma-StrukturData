#include <iostream>
#include <array>
using namespace std;

int main(){

    // looping untuk array di c++11 keatas
    /*
        for(declarasi variabel : array){
            statmen
        }
    */

    int arrayNilai[10] = {0,1,2,3,4,5,6,7,8,9};

    for(int nilai : arrayNilai){
        cout << "Address " << &nilai << " nilainya: " << nilai << endl;
        nilai = 1; // tidak merubah array
    }

    cout << endl;
    // memanipulasi array dengan referensi
    for(int &nilaiRef : arrayNilai){
        nilaiRef *= 2;
    }

    cout << endl;

    for(int &nilaiRef : arrayNilai){
        cout << "Address " << &nilaiRef << " nilainya: " << nilaiRef << endl;
    }
}