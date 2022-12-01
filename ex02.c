#include <stdio.h>

int main(void)
{
  int A[8];
  int X, Y;
  for (int i = 0; i < 8; i++)
  {
    printf("Digite o %dº valor: ", i + 1);
    scanf("%d", &A[i]);
  }
  printf("Digite X: ");
  scanf("%d", &X);
  printf("Digite Y: ");
  scanf("%d", &Y);
  printf("Soma: %d\n", A[X] + A[Y]);
  return 0;
}
