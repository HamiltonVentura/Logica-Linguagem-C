#include <iostream.h>
int main (void)
//leia 10 elementos de uma matriz A do tipo vetor. costruir uma matriz B de mesmo tipo 
//observando a seguinte a seginte lei de formação :se o valor do indice for par o val
//or deve ser multiplicado por
//5 sendo impar deve ser somado com 5;
{
    float A[10], B[10], RESULTADO;
    int I;
   
   cout<<"checagem de indice";
   //entrada de dados
   for (I=0;I<=9;I++)
   {
       cout<<"imforme o valor para o elemento :";
       cout <<I+1<<":  ";
       cin >>A[I];
       }
       // processamento par ou impar 
       for (I=0; I<=9;I++)
       if (I%2==0)
       B[I]=A[I]*5;
       else 
       B[I]=A[I]*5;
       //apresentação das matrizes
       for (I=0;I<=9;I++)
       cout << I+1<<"]="<<A[I]<<endl;
       cout <<endl;
       for (I=0;I<=9; I++)
       cout <<I+1<<"]="<<B[I]<<endl;
       system("pause");
       return 0;
       }
       
       
    
    
