#include <stdio.h>
#include <stdlib.h>
#define N 10


float *descente(float A[N][N], float B[N], int n)
{
  float   *x;
  x = malloc(sizeof(float) * n);
  return (x);
}


int main()
{
  float   A[N][N], B[N];
  float   *x;
  int     n;
  printf("Enter the size: ");
  scanf("%d", &n);
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      printf("A[%d][%d] = ", i, j);
      scanf("%f", &A[i][j]);
    }
  }
  for (int i = 0; i < n; i++)
  {
    printf("B[%d] = ", i);
    scanf("%f", &B[i]);
  }
  x = descente(A, B, n);
  printf("\n [");
  for (int i = 0; i < n; i++)
    printf("%f%c", x[i], ",]"[i == n - 1]);
}