/*
Selection Sort merupakan sebuah teknik pengurutan dengan cara
mencari nillai tertinggi / terendah di dalam array kemudian
menempatkan nilai tersebut di tempat semestinya. Algoritma ini
dapat mengurutkan data dari besar ke kecil (Ascending) dan
kecil kebesar (Descending)
*/

#include <iostream>
using namespace std;

// Selection sort
int main(){
    int swapCount = 0;
    int data[] = {78, 65, 90, 88, 70, 95, 60};
    int n = 7;

    for(int i = 0; i < n -1; i++){
        int minIndex = i;

        for(int j = i + 1; j < n; j++){
            if(data[j] < data[minIndex]){
                minIndex = j;
        
            }
        }

        swap(data[i], data[minIndex]);
        swapCount++;

    }

    cout << "Hasil Selection Sort: ";

    for(int i = 0; i < n; i++){
        cout << data[i] << " ";
    }

    cout << "Hasil Count : " << swapCount;
}