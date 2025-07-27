#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    int N, i = 1;
    long int fat = 1;
    cout << "\nprograma fatorial\n"<< endl;
    cout << "\nfatorial de qualquer valor :";
    cin >> N;
    while (i <= N)
    {
        fat *= i;
        i++;
    }
    cout << "\n";
    cout << "fatorial de " << N << "=" << fat << endl;
    return 0;
}
