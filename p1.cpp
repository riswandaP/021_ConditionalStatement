#include <iostream>
using namespace std;

float luas, panjang, lebar; //var global

void inputData(){
    cout << "Masukakan panjangnya:";
    cin >> panjang;

    cout << "Masukkan lebarnya;";
    cin >> lebar;
}

void prosedurLuas()
{
    luas = panjang * lebar;
}

void tampilkanLuas()
{
    cout << "Luas persegi panjang:" << luas << endl;
}

int main()
{
    inputData();
    prosedurLuas();
    tampilkanLuas();
}