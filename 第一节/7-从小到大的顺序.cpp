#include <stdio.h>
#include <math.h>

int main()
{
	int a[4][5], i, j,k,l,t;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 5; j++)
			scanf("%d", &a[i][j]);

	for(l=0;l<5;l++)
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
		{
			if ( a[i][j] > a[i][j + 1])
			{
				t = a[i][j];
				a[i][j] = a[i][j + 1];
				a[i][j + 1] = t;
			}
		}

	printf("每行按从小到大排列后的数组是:\n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
	

	return 0;
}