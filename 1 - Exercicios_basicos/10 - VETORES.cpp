/* 9.	Escreva um programa que leia um conjunto de 20 n�meros (positivos e negativos), escrevendo-os. A seguir, o programa
 dever� remover os valores negativos e re-escrever o conjunto. Use vetores
*/
#include <stdio.h>
#include <stdlib.h>
#define tam 10

main()
{

  int i, j, vet[tam] = {1, 2, 3, -4, -5, 3, 2, 59, 10}, vet_res[tam];

  printf("\n\tREMOVER NEGATIVOS DO VETOR\n\n");

  /*  for(i=0;i<tam;i++) {          //Carrega o vetor
        printf("\nInforme o elemento %d do vetor:  ",i+1);
        scanf("%d",&vet[i]);
    } */
  j = 0;
  for (i = 0; i < tam; i++) // Retira valores negativos
    if (vet[i] > 0)
    {
      vet_res[j] = vet[i];
      j++;
    }

  for (i = 0; i < j; i++) // Imprime vetor sem elementos negativos
    printf("\nElemento: %d", vet_res[i]);

  printf("\n\n\n\n");
  system("pause");
} // final
