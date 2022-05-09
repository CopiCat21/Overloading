//Nama          :   Benjamin Aldrin M N
//NRP           :   5024211025
//Departemen    :   Teknik Komputer
//Kelas         :   Pemrograman Lanjut A

#include <iostream>
#include "include/PersegiPanjang.hpp"

using namespace std;

void Clear()
{
    system("CLS||CLEAR");
}

void Enter()
{
    cout << "\n Tekan Enter Untuk Melanjutkan" << endl;
    cin.ignore();
}

int main()
{
    PersegiPanjang ketiga(0, 0, 0, 0);
    Clear();
    float midx, midy, panjang, lebar;
    cout << "Masukkan Data Persegi Panjang 1 : \n" << endl;
    cout << "Panjang : ";
    cin >> panjang;
    cout << "Lebar : ";
    cin >> lebar;
    cout << "Titik Tengah x : ";
    cin >> midx;
    cout << "Titik Tengah y : ";
    cin >> midy;
    PersegiPanjang pertama(midx, midy, panjang, lebar);

    Clear();
    cout << "Masukkan Data Persegi Panjang 2 : \n" << endl;
    cout << "Panjang : ";
    cin >> panjang;
    cout << "Lebar : ";
    cin >> lebar;
    cout << "Titik Tengah x : ";
    cin >> midx;
    cout << "Titik Tengah y : ";
    cin >> midy;
    PersegiPanjang kedua(midx, midy, panjang, lebar);

    Enter(); Clear();
    cout << "Persegi Panjang 1" << endl;
    pertama.cetak();
    cout << "Persegi Panjang 1" << endl;
    kedua.cetak();

    Enter(); Clear();

    bool n = true;
    int i;
    while (n)
    {
        cout << "Pilih Operator yang digunakan : \n" << endl;
        cout << "1. Apakah persegi panjang berpotongan atau tidak" << endl;
        cout << "2. Menggabungkan luas persegi panjang" << endl;
        cout << "3. Mengambil irisan persegi panjang" << endl;
        cout << "4. Memperluas persegi panjang" << endl;
        cout << "5. Memperkecil persegi panjang" << endl;
        cout << "6. Properti Kelas";
        cout << "\nPilih Menu : ";
        cin >> i;
        cin.ignore();
    
    
        switch (i)
        {
        case 1:
            {Clear();
            if (pertama==kedua)
            {
                cout << "Persegi Panjang Beririsan";
            }
            else
            {
                cout << "Persegi Panjang Tidak Beririsan";
            }
            Enter();
            break;}
        
        case 2:
            {Clear();
            ketiga = pertama + kedua;
            ketiga.cetak();
            Enter();
            break;}

        case 3:
            {Clear();
            ketiga = pertama - kedua;
            ketiga.cetak();
            Enter();
            break;}

        case 4:
            {Clear();
            cout << "Persegi Panjang 1 : \n" << endl;
            ++pertama;
            pertama.cetak();
            cout << "Persegi Panjang 2 : \n" << endl;
            ++kedua;
            kedua.cetak();
            Enter();
            break;}

        case 5:
            {Clear();
            cout << "Persegi Panjang 1 : \n" << endl;
            --pertama;
            pertama.cetak();
            cout << "Persegi Panjang 2 : \n" << endl;
            --kedua;
            kedua.cetak();
            Enter();
            break;}

        case 6:
            {Clear();
            cout << "xmin pertama   : " << pertama[1] << endl;
            cout << "xmax pertama   : " << pertama[2] << endl;
            cout << "ymin pertama   : " << pertama[3] << endl;
            cout << "ymax pertama   : " << pertama[4] << endl;
            cout << "xmin kedua     : " << kedua[1] << endl;
            cout << "xmax kedua     : " << kedua[2] << endl;
            cout << "ymin kedua     : " << kedua[3] << endl;
            cout << "ymax kedua     : " << kedua[4] << endl;
            break;}
        
        case 0:
            {return 0;}

            default:{break;}
        }
    }
}
