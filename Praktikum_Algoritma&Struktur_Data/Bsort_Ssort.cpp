// Diberikan nilai mahasiswa:
// 78 65 90 88 70 95 60
// urutkan secara ascending menggunakan
// 1. Bubble Sort
// 2. Selectio Sort
// Bandingkan 2 sorting ini
// int swapCount = 0;
// swap(data[j], data[j + 1])
// swapCount++

// cout << "Swap Count Bubble : " swapcount1;
// cout << "Swap Count Selection : " swapCount2;

#include <iostream>
using namespace std;

int main(){
    int mhs[] = {78, 65, 90, 88, 70, 95, 60};
    int n = 7; 

    int swapCount1 = 0;
    for(int i = 0; i < n; i++){
        for(int a = 0; a < n -i -1; a++){
            if(mhs[a] > mhs[a + 1]){
                swap(mhs[a], mhs[a + 1]);
                swapCount1++;
            }
        }
    }

    cout << "Hasil Bubble Sort: ";

    for(int i = 0; i < n; i++){
        cout << mhs[i] << " "; 
    }

    cout << "Swap Count : " << swapCount1;
}