#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int A[5][5];
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      int valor;
      int existe;
      do
      {
        valor = rand() % 100;     
        existe = 0;   
        for (int k = 0; k < j; k++)
        {
          if (A[i][k] == valor)
          {
            existe = 1;
            break;
          }
        }
        for (int k = 0; k < i; k++)
        {
          if (A[k][j] == valor)
          {
            existe = 1;
            break;
          }
        }
      } while (existe);
      A[i][j] = valor;
    }
  }
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%d\t", A[i][j]);
    }
    printf("\n");
  }
  return 0;
}
