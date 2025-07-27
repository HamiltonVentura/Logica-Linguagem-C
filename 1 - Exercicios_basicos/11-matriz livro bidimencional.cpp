#include <iostream>
using namespace std;

int main() {
    int a[10][4]; // 10 alunos, 4 notas cada
    int i, j;

    cout << "Apresentação das notas\n";

    // Entrada de dados
    for (i = 0; i < 10; i++) {
        cout << "\nInforme as 4 notas do aluno " << i + 1 << ":\n";
        for (j = 0; j < 4; j++) {
            cout << "Nota " << j + 1 << ": ";
            cin >> a[i][j];
        }
    }

    cout << "\n\nNotas dos alunos:\n";

    // Exibição dos dados
    for (i = 0; i < 10; i++) {
        cout << "\nAluno " << i + 1 << ": ";
        for (j = 0; j < 4; j++) {
            cout << "Nota " << j + 1 << " = " << a[i][j] << "  ";
        }
    }

    cout << "\n";
    return 0;
}
