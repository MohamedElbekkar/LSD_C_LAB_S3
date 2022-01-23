#include <stdio.h>

void check_msb(unsigned char a)
{
	int i;
	for(i=0; i<8 ; i++)
	{
			if((a & (1 << 7)))
				printf("1");
			else
				printf("0");
			a = a << 1;
	}
}

int main()
{
	check_msb('1');
	return 0;
}
