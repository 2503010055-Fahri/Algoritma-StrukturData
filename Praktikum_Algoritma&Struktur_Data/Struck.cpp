#include <iostream>
using namespace std;

struct nilai {
    double mtk;
    double bin;
    double bing;
    double ipa;
    string lulus;
};

int main(){
    nilai fahri;
    nilai unknown;
    fahri.mtk = 80;
    fahri.bin = 88;
    fahri.bing = 90;
    fahri.ipa = 85;
    fahri.lulus;

    cout << endl;
    cout << "Nilai MTK Fahri         : " << fahri.mtk << endl;
    cout << "Nilai B.Indonesia Fahri : " << fahri.bin << endl;
    cout << "Nilai B.Inggris Fahri   : " << fahri.bing << endl;
    cout << "Nilai IPA Fahri         : " << fahri.ipa << endl;
    cout << "Lulus" << fahri.lulus;

    unknown.mtk = 80;
    unknown.bin = 88;
    unknown.bing = 90;
    unknown.ipa = 85;
    unknown.lulus;

    cout << endl;
    cout << "Nilai MTK Unknown         : " << fahri.mtk << endl;
    cout << "Nilai B.Indonesia Unknown : " << fahri.bin << endl;
    cout << "Nilai B.Inggris Unknown   : " << fahri.bing << endl;
    cout << "Nilai IPA Unknown         : " << fahri.ipa << endl;
    cout << "Lulus" << unknown.lulus;
}