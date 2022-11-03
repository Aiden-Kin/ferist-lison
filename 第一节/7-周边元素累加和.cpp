#include <stdio.h>
#include <math.h>

int main()
{
	int a[4][5], i, j, sum = 0, pro = 1;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 5; j++)
			scanf("%d", &a[i][j]);

	for (i = 0; i < 4; i++)
		for (j = 0; j < 5; j++)
		{
			if (i ==0||i==3||j==0||j==4) sum += a[i][j];
		}




	printf("sum=%d\n", sum);

	return 0;
}