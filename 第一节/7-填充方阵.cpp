#include <stdio.h>
#include <math.h>

int main()
{

	int a[6][6],i,j;


	for (i = 0; i <6; i++)
		for (j = 0; j < 6; j++)
		{
			if (i < 3 && j < 3) a[i][j] = 1;
			if (i < 3 && j >= 3) a[i][j] = 2;
			if (i >= 3 && j < 3) a[i][j] = 3;
			if (i >= 3 && j >= 3) a[i][j] = 4;
		}




	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 6; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
	

	return 0;
}
