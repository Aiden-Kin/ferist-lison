#include <stdio.h>
#include <math.h>

int main()
{
	int a, n, i;

	int prime(int n);

	for (i = 3; i < 40; i++)
	{
		if (prime(i) && prime(i + 2) && prime(i + 6))
		{
			printf("%d,%d,%d\n", i, i + 2, i + 6);
		}
		
	}

	return 0;
}

int prime(int n)
{
	int i;
	for (i = 2; i < n ; i++)
	{
		if (n % i == 0)
			return 0;
	}

	return  1;
}

