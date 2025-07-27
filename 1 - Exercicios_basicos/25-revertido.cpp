#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100];  // buffer maior para evitar overflow

    cout << "Digite uma palavra ou frase: ";
    cin.getline(a, 100);

    int n = strlen(a);
    for (int i = 0; i < n; i++) {
        if (a[i] == 'a')
            a[i] = 'b';
    }

    cout << "String modificada: " << a << endl;

    system("pause");  // só no Windows
    return 0;
}
