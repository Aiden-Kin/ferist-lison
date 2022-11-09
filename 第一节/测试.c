#include"stdio.h"
double fun(double n)
{
	double s = 0, m = 0;
	int t = 1, i, j = 1;
	for (i = 0; i <= n; i++)
	{
		s += j;
		m = t * (t + 1);
		j = 1.0 / m;
		t++;
	}
	return s;
}

int main()
{
	int n;
	printf("Please enter the value of n:");
	scanf_s("%d", &n);
	printf("s=%f\n", fun(n));
	return 0;
}