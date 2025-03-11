#include <iostream>
using namespace std;

float Luas, Panjang, Lebar;
void ProsedurHitungLuas(){
    Luas = Panjang * Lebar;
}
void ProsedurInputData(){
    cout << "Masukan Panjangnya : ";
    cin >> Panjang;
    cout << "Masukan Lebarnya : ";
    cin >> Lebar;
}
void ProsedurOutputData(){
    cout << "Luas Persegi Panjang : " <<Luas;
}

int main()
{
    ProsedurInputData();
    ProsedurHitungLuas();
    ProsedurOutputData();
}