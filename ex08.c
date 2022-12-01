#include <stdio.h>

int main(void)
{
  int A[10];
  for (int i = 0; i < 10; i++)
  {
    int valor;
    printf("Digite o %dº valor: ", i + 1);
    scanf("%d", &valor);
    int existe = 0;
    for (int j = 0; j < i; j++)
    {
      if (A[j] == valor)
      {
        existe = 1;
        break;
      }
    }
    if (existe)
    {
      i--;
      continue;
    }
    A[i] = valor;
  }
  for (int i = 0; i < 10; i++)
  {
    printf("%d\n", A[i]);
  }
  return 0;
}
