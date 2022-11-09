#include <stdio.h>
#include <math.h>

int main()
{
	int i, j, n;
	double fun(int n);

	printf("Please enter the value of n:");

	scanf("%d",&n);

	printf("s=%f\n",fun(n));

	return 0;
}

double fun(int n)
{
	double s=0,t=1.0,i;

	for (i=1;i<=n;i++)
	{
		s += t;

		t = 1.0 / (i * (i + 1));

		
	}

	return s;


}