#include <iostream>
#include <cstdlib>
using namespace std;

main()
{
     int a, b, c, d, qa, qb, qc, qd;

     cout << "entre o primeiro numero :";
     cin >> a;
     cout << endl;
     cout << "segundoo numero :";
     cout << endl;
     cin >> b;
     cout << "entre o terceiro:";
     cin >> c;
     cout << endl;
     cout << "entre o quarto";
     cin >> d;
     cout << endl;

     qa = a * a;
     qb = b * b;
     qc = c * c;
     qd = d * d;
     if (qc > 1000)
     {
          cout << "o valor do terceiro :" << qc;
          cout << endl;
     }
     else
     {
          cout << "os respectivos valores sao :" << endl;

          cout << qa;
          cout << endl;
          cout << qb;
          cout << endl;
          cout << qc;
          cout << endl;
          cout << qd;
     }
     system("pause");
     return 0;
}
