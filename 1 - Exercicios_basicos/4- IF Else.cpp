#include <iostream.h>
int main(void)
{
    int A, B, R;
    cout << "entre a :";
    cin >> A;
    cout << "entre b :";
    cin >> B;
    R = A + B;
    if (R >= 10)
        cout << "resultado =" << R + 5 << endl;
    else
        cout << " resultado =" << R - 7 << endl;
    system("pause");
    return 0;
}
