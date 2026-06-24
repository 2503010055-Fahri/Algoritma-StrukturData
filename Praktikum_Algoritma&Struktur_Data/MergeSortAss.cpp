#include <iostream>
using namespace std;

// Fungsi untuk menggabungkan dua bagian array
void merge(int arr[], int left, int mid, int right){
    // Banyak elemen bagian kiri
    int n1 = mid - left + 1;

    // Banyak elemen bagian kanan
    int n2 = right - mid;

    // Array sementara kiri
    int L[n1];

    // Array sementara kanan
    int R[n2];

    // Menyalin data ke array kiri
    for(int i = 0; i < n1; i++){
        L[i] = arr[left + i];
    }

    // Menyalin data ke array kanan
    for(int j = 0; j < n2; j++){
        R[j] = arr[mid + 1 + j];
    }

    // Indeks array kiri
    int i = 0;

    // Indeks array kanan
    int j = 0;

    // Indeks array utama
    int k = left;

    // Penggabungan secara ascending
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }

        k++;
    }

    // Menyalin sisa elemen kiri
    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    // Menyalin sisa elemen kanan
    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Fungsi Merge Sort
void mergeSort(int arr[], int left, int right){
    if(left < right)
    {
        // Menentukan titik tengah
        int mid = (left + right) / 2;

        // Rekursif bagian kiri
        mergeSort(arr, left, mid);

        // Rekursif bagian kanan
        mergeSort(arr, mid + 1, right);

        // Menggabungkan kembali
        merge(arr, left, mid, right);
    }
}

int main(){
    // Data array   
    int data[] = {4, 7, 3, 9, 2, 5, 11, 21};
    int n = sizeof(data) / sizeof(data[0]);
    cout << "Data Sebelum Sorting : ";

    for(int i = 0; i < n; i++){
        cout << data[i] << " ";
    }

    cout << endl;

    mergeSort(data, 0, n - 1);
    cout << "Data Setelah Sorting Ascending : ";

    for(int i = 0; i < n; i++){
        cout << data[i] << " ";
    }

    return 0;
}