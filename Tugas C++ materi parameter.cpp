#include <iostream>
using namespace std;
int hitung(int a, int t)
{
    int hasil;
    hasil = a * t;
    return hasil;
}
int main()
{
    int x;
    x = hitung(10, 20);
    cout << "Luas segitiga adalah " << x;
}