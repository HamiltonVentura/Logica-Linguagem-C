#include <iostream>
using namespace std;

 int main(void)
{
       int a, i, sexo;
       int altura;

       cout << "Digite o sexo: " << endl;
       cout << "[1] masculino" << endl;
       cout << "[2] feminino" << endl;
       cin >> a;
       switch (a)
       {
       case 1:
              cout << "imforme a idade do homem";
              cin >> a;
              if (a > 4 && a < 7)
              {
                     cout << "A infantil" << endl;
              }
              else if (a > 7 && a < 10)
              {
                     cout << "B infantil" << endl;
              }
              else if (a > 11 && a < 13)
              {
                     cout << " A juvenil " << endl;
              }
              else if (a > 14 && a < 17)
              {
                     cout << " B juvenil" << endl;
              }
              else if (a >= 18)
              {
                     cout << "senior" << endl;
              }
              break;

       case 2:
              cout << "imforme a idade da mulher";
              cin >> a;
              if (a > 4 && a < 7)
              {
                     cout << "A infantil" << endl;
              }
              else if (a > 7 && a < 10)
              {
                     cout << "B infantil" << endl;
              }
              else if (a > 11 && a < 13)
              {
                     cout << " A juvenil " << endl;
              }
              else if (a > 14 && a < 17)
              {
                     cout << " B juvenil" << endl;
              }
              else if (a >= 18)
              {
                     cout << "senior" << endl;
              }
              break;
       }


       return 0;
}
