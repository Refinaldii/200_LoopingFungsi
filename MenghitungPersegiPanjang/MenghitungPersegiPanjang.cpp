

#include <iostream>
using namespace std;

int panjang, lebar;

void inputdata() {
    cout << "Masukan Nilai Panjang : " << endl;
    cin >> panjang;
    cout << "Masukan Nilai Lebar : " << endl;
    cin >> lebar;
}
int hitungluas() {
    return panjang * lebar;
}
void bebas() {
    cout << " Luasnya adalah : " << hitungluas() << endl;

}

int main()
{
    inputdata();
    bebas();
}

