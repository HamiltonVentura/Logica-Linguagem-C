#include <iostream.h>
int main(void)
{
    int N, I = 1, R;
    cout << "\nentre valor da tabuada:";
    cout << "\n";
    do
    {
        R = N * I;
        cout << "N";
        cin >> N;
        cout << "x";
        cout << I;
        cout << "=";
        cout << R << endl;
        I++;
    } while (I <= 10);
    system("pause");
    return 0;
}
