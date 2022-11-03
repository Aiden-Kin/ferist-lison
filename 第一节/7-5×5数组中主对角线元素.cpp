#include <stdio.h>
#include <math.h>

int main()
{
	int a[5][5], i, j,sum=0,pro=1;

	for (i = 0; i <5; i++)
		for (j = 0; j <5; j++)
			scanf("%d", &a[i][j]);

	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
			if (i == j) sum += a[i][j];
			if(i+j==4)	pro*= a[i][j];
		}




	printf("sum=%d,product=%d\n", sum, pro);

	return 0;
}