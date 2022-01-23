#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float newton(float (*myfunction)(float) , float (*derivmyfunction)(float) , float alpha, int n)
{
	int i=0;
	for (i = 0; i < n; i++)
		{
			alpha = alpha - (myfunction(alpha)/derivmyfunction(alpha));
		}
		
	printf("%f, %f", alpha , myfunction(alpha));
	return 0;
}

float ab(float x)
{
	return pow(x,2)-2;
}

float deriv(float x)
{
	return 2*x;
}

int main()
{
	float (*functionmy)(float)=&ab; 
	float (*derivmyfunction)(float)=&deriv;
	newton(functionmy,derivmyfunction, 1, 50);
}
