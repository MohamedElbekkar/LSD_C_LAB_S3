#include <stdlib.h>
#include <stdio.h>
#define N 10

float *lu(float A[N][N], float B[N], int n)
{
  return (x);
}

int main()
{
  float   A[N][N], B[N];
  float   *x;
  int     n;
  printf("Enter the size of the matrix: ");
  scanf("%d", &n);
  printf("Filling the matrix A\n");
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      printf("A[%d][%d] = ", i, j);
      scanf("%f", &A[i][j]);
    }
  }
  printf("Filling the matrix B\n");
  for (int i = 0; i < n; i++)
  {
    printf("B[%d] = ", i);
    scanf("%f", &B[i]);
  }
  x = lu(A, B, n);
  printf("\nThe resulting vector: [");
  for (int i = 0; i < n; i++)
    printf("%f%c", x[i], ",]"[i == n - 1]);
}