#include <stdio.h>
#include <math.h>

int main()
{
	int n = 1;
	double x1, x2=2,down=0,pi=1;

	do
	{
		x1 = x2;

		down = sqrt(down+2);

		x2 = 2 / down;

		pi *= x2;
	}
		while (fabs(x2 - x1) > 1e-6);
	pi *= 2;
	printf("pi=%.2f\n",pi);

	return 0;
}
