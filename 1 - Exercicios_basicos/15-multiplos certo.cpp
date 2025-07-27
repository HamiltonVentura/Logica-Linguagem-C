
#include <iostream>
using namespace std;
int main()
{
  for (int i = 0; i < 16; i++)
    if ((i % 2) == 1)
      cout << i << " e multiplo de 3 " << endl;
    else
      cout << "valor invalido" << endl;

  return 0;
}
