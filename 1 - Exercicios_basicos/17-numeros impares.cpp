#include <iostream.h>
main()
{
       int a, i;
       system("color 02");
       for (i = 100; i <= 150; i++)
       {
              if ((i % 2) == 1)
                     cout << i << "  munero e impar" << endl;
              else
                     cout << i << "  numero e par: " << endl;
       }
       system("pause");
}
