#include <iostream>

using namespace std;

int main()
{
    float panjang, lebar, tinggi, luas_alas, luas_sisi_depan, luas_sisi_kanan, luas_permukaan_balok;

    cout << "Masukkan Panjang : ";
    cin >> panjang;
    cout << "Masukkan Lebar : ";
    cin >> lebar;
    cout << "Masukka Tinggi : ";
    cin >> tinggi;
    luas_alas = panjang * lebar;
    luas_sisi_depan = panjang * tinggi;
    luas_sisi_kanan = lebar * tinggi;
    luas_permukaan_balok = 2 * (luas_alas + luas_sisi_depan + luas_sisi_kanan);
    cout << "luas permukaan baloknya adalah : " << luas_permukaan_balok << endl;
}
