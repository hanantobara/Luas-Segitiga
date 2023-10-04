#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;
int main() {
    float luas;
    float alas;
    float tinggi;
    cout<<"Masukkan Alas Segitiga : \n";
    cin >> alas;
    cout<<"Masukkan Tinggi Segitiga : \n";
    cin >> tinggi;
    luas = (float) (alas * tinggi * 0.5);
    cout << "Luas segitiga adalah : " << luas << endl;
    return 0;
}
