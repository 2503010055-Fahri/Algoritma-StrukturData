/*
Keuntunga Bubble Sort
1. Proses penghitungan Bubble Sort merupakan metode yang paling sederhana
2. Algoritma Bubble Sort mudah dipahami
3. Langkah atau tahapan dalam pengurutan data sangat sederhana

Kekurangan
1. Proses penghitungan Bubble Sort metode pengurutan termasuk paling tidak
   efisien wlaupun dianggap sederhana. Karena proses pengurutan data dilakukan
   dengan tahapan satu - satu, mulai dari data paling awal sebelah kiri, sampai data terakhir
2. Ketika data yang kita punya banyak atau dalam jumlah besar, maka proses penghitungan akan
   semakin lama dan lambat. Karena proses pengurutan data secara tunggal
3. Jumlah pengulangan akan tetap sama sampai ke data yang terakhir, walaupun
   sebagian data yang ada telah terurut
*/

#include <iostream>
using namespace std;

// Bubble sort
int main(){
    int data[] = {5, 3, 8, 1};
    // n adalh banyak data
    int n = 4;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n -i -1; j++){
            if(data[j] > data [j + 1]){
                swap(data[j], data[j + 1]);
            }
        }
    }

    cout << "Hasil sorting : ";

    for(int i = 0; i < n; i++){
        cout << data[i] << " ";
    }
}