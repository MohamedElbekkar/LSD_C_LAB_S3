#include <stdio.h>
#include <stdlib.h>


float Polylagrange(float *T,float x,int i)
{
	float m=1;
	int j=0;
	while (j<2)
	{
		if (i!=j)
		{
			m=m*((x-T[j])/(T[i]-T[j]));

		}
		j++;
	}
	printf("%d\n", j);
	printf("%f\n", m);
	return m;
}

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






int main()
{
	float T[]={-1,0,3};
	float a=Polylagrange(T,2,0);
	//printf("%f",a);
	return 0;
}


