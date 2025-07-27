#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int i, a;
    for (i = 15; i <= 200; i++)
    {
        a = i * i;
        cout << "o numero" << i << "tem o seu quadrado::" << a << endl;
    }
    system("pause");
    return 0;
}
