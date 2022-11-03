#include <stdio.h>
#include <math.h>

int main()
{
	int a[4][4]{0}, i, j, sum = 0;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &a[i][j]);
		}

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
		{
			if (i >= j)sum += a[i][j];
		}

	printf("s=%d\n", sum);

	return 0;
}




