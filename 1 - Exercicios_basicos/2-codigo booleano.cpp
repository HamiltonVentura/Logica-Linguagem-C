#include <iostream>
using namespace std;

int main(void)
{
    int codigo;
    int resp;
    resp = 1;

    system("color 02");
    cout << "entre codigo de accesso::";
    cin >> codigo;
    cout << "\n";
    if (codigo == 1 || codigo == 2 || codigo == 3)
    {
        if (codigo == 1)
            cout << "acesad0\n";
        if (codigo == 2)
            cout << "acessado\n";
        if (codigo == 3)
            cout << "acessado";
    }

    else
        cout << "codigo invalido\n";
        
    cout << "deseja continuar tecle <1>:";
    cin >> resp;
    system("pause");
    return 0;
}
