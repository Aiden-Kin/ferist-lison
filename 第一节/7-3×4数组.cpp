#include <stdio.h>
#include <math.h>

int main()
{
	int a[3][4],i, j,s=0,cont=0,ave;
	

	for (i = 0; i <3 ; i++)
		for (j = 0; j <4 ; j++)
		{
			scanf("%d", &a[i][j]);
		}

	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
		{
			s += a[i][j];
		}
	ave = s / 12;

	s = 0;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			if (a[i][j] >= ave)
			{
				s += a[i][j]; cont++;
			}

	printf("sum=%d\ncount=%d\n", s, cont);


	return 0;
}