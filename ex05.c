#include <stdio.h>

int main(void)
{
  int A[50];
  for (int i = 0; i < 50; i++)
  {
    A[i] = (i + 5 * i) % (i + 1);
  }
  for (int i = 0; i < 50; i++)
  {
    printf("%d\n", A[i]);
  }
  return 0;
}
