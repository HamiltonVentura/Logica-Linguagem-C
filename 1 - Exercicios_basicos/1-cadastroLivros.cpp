#include <iostream>
#include <cstdlib>  // para system("pause")
#include <string>   // para getline com std::string
using namespace std;

struct cadastro_livro {
    int numero;
    int tel;
    string nome;
    string autor;
    string doador;
};

struct cadastro_aluno {
    string nome;
    string turma;
    int tel;
    int cpf;
    string end;
};

cadastro_livro a[2];
cadastro_aluno b[2];

int cadastrosemenu() {
    cout << "[1] Cadastros aluno" << endl;
    cout << "[2] Cadastros livros" << endl;
    return 0;
}

int cadastro_aluno() {
    for (int i = 0; i < 2; i++) {
        cout << "Digite o nome do aluno: ";
        getline(cin, b[i].nome);

        cout << "Digite o telefone do aluno: ";
        cin >> b[i].tel;
        cin.ignore(); // limpa o buffer do enter

        cout << "Digite a turma do aluno: ";
        getline(cin, b[i].turma);
    }
    system("pause");
    return 0;
}

int cadastro_livros() {
    for (int i = 0; i < 2; i++) {
        cout << "Entre o nome do livro: ";
        getline(cin, a[i].nome);

        cout << "Entre o autor: ";
        getline(cin, a[i].autor);

        cout << "Nome do doador: ";
        getline(cin, a[i].doador);
    }
    system("pause");
    return 0;
}

int main() {
    int opcao;

    cout << "\t\t\tMenu\n";
    cout << "Programa Biblioteca\n";
    cout << "[1] Cadastros\n";
    cout << "[2] Procurar\n";
    cout << "Escolha uma opcao: ";
    cin >> opcao;
    cin.ignore(); // limpar buffer

    if (opcao == 1) {
        cadastrosemenu();
        cout << "Digite [1] para aluno ou [2] para livro: ";
        int escolha;
        cin >> escolha;
        cin.ignore();

        if (escolha == 1) {
            cadastro_aluno();
        } else if (escolha == 2) {
            cadastro_livros();
        } else {
            cout << "Opcao invalida!" << endl;
        }
    } else {
        cout << "Funcao ainda nao implementada." << endl;
    }

    system("pause");
    return 0;
}
