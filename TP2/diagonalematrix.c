#include <stdio.h>
#include <stdlib.h>


int ** diagonale(int ** x, int n)
{
	int i =0;
	int j=0;
	int ** z;
	z = (int**)malloc(sizeof(int*) *2);
	z[0] = (int*)malloc(sizeof(int) * n);
	z[1] = (int*)malloc(sizeof(int) * n);		
	while(j < n)
		{
				z[0][j]=x[j][j];
				z[1][j]=x[j][n-j-1]; 
			j++;
		}
	return z;
}

int main()
{
	int n=3;
	int ** x;
	int i=0;
	int j=0;
	x = (int**)malloc(sizeof(int*) * n);
	while (i < n)
	{
		x[i] = (int*)malloc(sizeof(int) * n);
		j = 0;
		while(j < n)
		{
			printf("Please enter the value of i = %d and j = %d :  ", i,j);
			scanf("%d", &x[i][j]);
			j++;
		}
		i++;
	}
	int ** z;
	z=diagonale(x,n);
	
	// Afficher la matrice
	i=0;
	while (i < 2)
	{
		j = 0;
		while(j < n)
		{
			printf("%d ", z[i][j]);
			j++;
		}
		i++;
	}
	return 0;
}
