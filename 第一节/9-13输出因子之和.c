#include <stdio.h>
#include <math.h>

int main()
{
	int a, j;

	int fun(int n);

	printf("Please enter value of n:");

	scanf("%d",&a);

	printf("sum=%d\n",fun(a));


	return 0;
}

int fun(int n)
{
	int i, s=0;

	for (i=1;i <=n; i++)
	{
		if (n % i == 0)
		{
			s += i;
		}


	}



	return s;
}


