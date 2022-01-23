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
		
	printf("%f, %f \n", alpha , myfunction(alpha));
	return 0;
}


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
	printf("%f, %f \n",(a+b)/2 , myfunction((a+b)/2));
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
	newton(functionmy,derivmyfunction, 3, 3);
	dichotomie(functionmy, 1, 3, 3);
	newton(functionmy,derivmyfunction, 3, 10);
	dichotomie(functionmy, 1, 3, 10);
	newton(functionmy,derivmyfunction, 3, 30);
	dichotomie(functionmy, 1, 3, 30);
	
	

}
