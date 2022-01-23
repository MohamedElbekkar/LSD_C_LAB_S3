#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float dichotomie(float (*myfunction)(float) , float a, float b, int n)
{
	int i=0;
	for (i = 0; i < n; i++)
		{
				if(myfunction((a+b)/2) * myfunction(b) < 0 )
					a=(a+b)/2;
				else
					b=(a+b)/2; 
		}
	printf("%f, %f",(a+b)/2 , myfunction((a+b)/2));
	return 0;
}

float ab(float x)
{
	return pow(x,2)-2;
}

int main()
{
	float (*functionmy)(float)=&ab; 
	dichotomie(functionmy, 1, 3, 100);
}
