#include <stdio.h>
#include <stdlib.h>
int ** sum(int ** x, int ** y, int n)
{
	int i=0;
	int j=0;
	int ** z;
	z = (int**)malloc(sizeof(int*) * n);
	while (i < n)
	{
		z[i] = (int*)malloc(sizeof(int) * n);
		j = 0;
		while(j < n)
		{
			z[i][j] = x[i][j] + y[i][j];
			j++;
		}
		i++;
	}
	return z;
}

int main()
{
	int n=2;
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
			x[i][j] = 6;
			y[i][j]= 4;
			j++;
		}
		i++;
	}

	int ** z;
	z=sum(x,y,n);
	printf("%d,%d,%d,%d", z[0][0], z[0][1], z[1][1], z[1][0]);
	return 0;
}
