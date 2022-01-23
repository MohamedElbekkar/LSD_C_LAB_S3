#include <stdio.h>
#include <stdlib.h>

int ** multiply(int ** x, int ** y, int n)
{
	int i=0;
	int j=0;
	int k;
	int ** z;
	z = (int**)malloc(sizeof(int*) * n);
	while (i < n)
	{
		z[i] = (int*)malloc(sizeof(int) * n);
		j = 0;
		while(j < n)
		{
			k=0;
			z[i][j]=0;
			while(k < n)
				{
					z[i][j] += x[i][k] * y[k][j] ;
					k++;
				}
			j++;
		}
		i++;
	}
	return z;
}

int main()
{
	int n=4;
	int ** x;
	int ** y;
	int i=0;
	int j=0;
	x = (int**)malloc(sizeof(int*) * n);
	y = (int**)malloc(sizeof(int*)*n );
	while (i < n)
	{
		x[i] = (int*)malloc(sizeof(int) * n);
		y[i] = (int*)malloc(sizeof(int) * n);
		j = 0;
		while(j < n)
		{
			x[i][j] = 2;
			y[i][j]= 2;
			j++;
		}
		i++;
	}

	int ** z;
	z=multiply(x,y,n);
	
	// Afficher la matrice
	i=0;
	while (i < n)
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
