#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;

    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    cout << a / b << endl; // pembagian
    cout << a % b << endl; // modulus
    cout << a * b << endl; //perkalian

    return 0;
}