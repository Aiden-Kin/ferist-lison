#include <stdio.h>
#include <math.h>

int main()
{
	int a[7][8]{1,0}, i, j;

	for (i = 0; i < 7; i++)
		a[i][0] = 1;

	a[1][1] = 1;

	for(i=1;i<7;i++)
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			a[i][j + 1] = 1;
		}


	for (i = 0; i < 7; i++)
	{
		for (j = 0; j <=i; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
		

	return 0;
}
