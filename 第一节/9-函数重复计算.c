#include <stdio.h>
#include <math.h>

int main()
{
	int a, n;
	int fun(int a, int n);

	printf("Please enter a & n:");

	scanf("%d%d", &a, &n);

	printf("Sn=%d\n", fun(a, n));

	return 0;
}

int fun(int a, int n)
{
	int i,s=0,t=a;
	for (i = 1; i <= n; i++)
	{
		s += t;

		t =t +  pow(10, i) * a;
	}


	return s;
}