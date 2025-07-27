#include <iostream>
using namespace std;

int main() {
    int N, I = 1, R;

    cout << "\nEntre o valor da tabuada: ";
    cin >> N;

    cout << "\nTabuada de " << N << ":\n";

    do {
        R = N * I;
        cout << N << " x " << I << " = " << R << endl;
        I++;
    } while (I <= 10);

    return 0;
}
