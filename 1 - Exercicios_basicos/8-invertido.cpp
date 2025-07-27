#include <iostream>
#include <string>
using namespace std;

int main() {
    string A;
    cout << "Digite uma palavra ou frase: ";
    getline(cin, A); // segura e moderna

    string B = A; // cópia para inverter

    int n = A.length();
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        swap(B[i], B[j]); // troca os caracteres
    }

    cout << "Invertida: " << B << endl;
    return 0;
}
