#include <iostream.h>
main()
{
       char A[20], B[20];
       int i = 0, n, j;

       gets(A);
       n = strlen(A);
       for (j = n - 1; i < n; i++)
       {
              j--;
              A[i] = B[j];
       }
       puts(A);
       system("pause");
}
