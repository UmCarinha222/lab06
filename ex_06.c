#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int A[4][4];
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      A[i][j] = rand() % 20 + 1;
    }
  }
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (i < j)
      {
        A[i][j] = 0;
      }
    }
  }
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
  return 0;
}
