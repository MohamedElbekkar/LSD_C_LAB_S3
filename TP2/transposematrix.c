#include <stdio.h>
#include <stdlib.h>

int ** transpose(int ** x, int n)
{
	int i =0;
	int j=0;
	int ** z;
	z = (int**)malloc(sizeof(int*) * n);
	while (i < n)
	{
		z[i] = (int*)malloc(sizeof(int) * n);
		j = 0;
		while(j < n)
		{
			z[i][j]=x[j][i];
			j++;
		}
		i++;
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
	i=0;
	while (i < n)
	{
		j = 0;
		while(j < n)
		{
			printf("%d ", x[i][j]);
			j++;
		}
		i++;
	}
	

	
	int ** z;
	z=transpose(x,n);
	// Afficher la matrice TRANSPOSE
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
	
	
	
	
	
