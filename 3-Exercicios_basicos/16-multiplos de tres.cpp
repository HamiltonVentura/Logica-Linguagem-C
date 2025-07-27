#include <iostream>
using namespace std;

int main()
{

    int a, i;
    cout << "digite um numero:";
    cin >> i;
    a = i * i * i;

    if (a > 300)
    {
        cout << "valor obtido:" << a;
        cout << endl;
    }
    else
        cout << "valor invalido" << endl;

    system("pause");
    return 0;
}
