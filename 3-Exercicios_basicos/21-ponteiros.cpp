#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
    char letra;
    int i;
    float *pmatriz = 0, a[5];
    for (i = 0; i <= 4; i++)
    {
        cout << "entre uma valor para a variavel a [" << i + 1 << "]=";
        cin >> a[i];
    }
    cout << endl;

    for (i = 0; i <= 4; i++)
    {
        pmatriz = &a[i];
        cout << *pmatriz << "-" << pmatriz << endl;
    }
    return 0;
}
