#include <stdio.h>
#include <stdlib.h>

int ** sum(int ** x, int ** y)
{
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
	x = (int**)malloc(sizeof(int*) * 2);
	y = (int**)malloc(sizeof(int*)*2 );
	while (i < n)
	{
		x[i] = (int*)malloc(sizeof(int) * 2);
		y[i] = (int*)malloc(sizeof(int) * 2);
		j = 0;
		while(j < n)
		{
			x[i][j] = 1;
			y[i][j]= -1;
			j++;
		}
		i++;
	}

	int ** z;
	z=sum(x,y);
	printf("%d,%d,%d,%d", z[0][0], z[0][1], z[1][1], z[1][0]);
	return 0;
}