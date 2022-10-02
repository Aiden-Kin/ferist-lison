#include <stdio.h>
#include <math.h>

int main()
{
	double pi=1,x=1;
	for (double n = 1;x>1E-6 ; n++)	//精度通过x判断（x为单项）
	{
		x = 2.0*n * 2.0*n / ((2.0*n - 1) * (2.0*n + 1));

		pi *= x;		//此时pi为	pi/2

		x -= 1;
		}
	pi *= 2;

	printf("pi=%7.2f\n", pi);

	return 0;
}
