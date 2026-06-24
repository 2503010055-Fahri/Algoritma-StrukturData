#include <iostream>
#include <queue>
using namespace std;

int main(){
    int top = 0;
    queue <string> antrian;

    // Enqueue tambah antrian
    antrian.push("Miftah");
    antrian.push("Fahri");
    antrian.push("Danil");
    antrian.push("Fasya");

    //antrian.push("Darurat!");

    cout << "Antrian Pertama : " << antrian.front() << endl;

    while(!antrian.empty()){
        cout << "Memamnggil : " << antrian.front() << endl;
        antrian.pop();
    }
}