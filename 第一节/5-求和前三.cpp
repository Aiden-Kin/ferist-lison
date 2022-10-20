#include <stdio.h>
#include <math.h>

int main()
{
	int a[20]={0,0,1}, b,i;

	for (i = 3; i < 20; i++)
	{
		a[i] = a[i - 1] + a[i - 2]+a[i-3];
	}

	for (i = 0; i < 20; i++)
	{
		printf("%10d", a[i]);

		if ((i + 1) % 4 == 0)printf("\n");
	}

	return 0;
}
