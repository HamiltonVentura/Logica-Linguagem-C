#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
   system("color 02");
   int p, m, e;
   cout << "entre o peso :";
   cin >> p;
   cout << endl;

   if (p > 50)
   {
      e = p - 50;
      m = e * 4;
      cout << "o exesso :" << e;
      cout << endl;
      cout << "a multa :" << m;
   }

   else
   {
      e = 0;
      cout << "multa igual a: " << e;
      cout << endl;
   }
   system("pause");
   return 0;
}
