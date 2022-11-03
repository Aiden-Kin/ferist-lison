
#include<stdio.h>
int main()
{
	int a[7][7], i, j,k;
	char b[7][7];
	for (i = 0; i < 7; i++)
				for (j = 0; j < 7; j++)
				{
					a[i][j] = 0;
				}

	for (i = 0; i < 7; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i < 7; i++)
		for (j = 1; j < i; j++)
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];

	for (i = 0; i < 7; i++)
		for (j = 0; j < 3; j++)
		{
			k = a[i][j];
			a[i][j] = a[i][6-j];
			a[i][6-j] = k;
		}
	

	


	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
				while (a[i][j] == 0)
				{
					printf("     ");
					j++;
				}

			printf("%5d", a[i][j]);
		}
			printf("\n");
	
	}
}