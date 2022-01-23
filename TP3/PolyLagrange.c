#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Exercice 1
float PolyLagrange(float * liste, float x, int i, int n)
{
	int j=0;
	float b=1;
	for(j=0; j<n; j++)
		{
			if(i!=j)
			{
				b=b* (x - liste[j])/(liste[i]-liste[j]);
			}
				
		}
	return b;
}

//Exercice 2
float InterpLagrange(float* X, float (*myfunction)(float), float x, int n)
{
	int j;
	float i=0;
	for(j=0; j<n; j++)
		{
			i=i+( PolyLagrange(X, x, j, n) * myfunction(X[j]) );
		}
	return i;
}




float function(float x)
{
	return pow(x,2)-2;
}


int main()
{
	/**int k;
	scanf("%d", &k);
	float liste[k]; */
	float liste[]={-1,0,3};
	float b= PolyLagrange(liste, 2, 0, 3);
	//printf("%f", b);
	
	//ex 2
	float (*myfunction)(float)=&function; 
	float z=0;
	z=InterpLagrange(liste, myfunction,2,3);
	printf("%f", z);
	return 0;
}
