#include<stdio.h>
#include<math.h>

int main()
{
	float x, y;

	scanf("%f", &x);

	if (x > 6)
	{
		y = (5.0 / 27.0)*(x * x + 4 * x - 6);
	}
	else if (6 >= x && x > 0)
	{
		y = (log(16)/log(3)) + x;
	}
	else if (x <= 0)
	{
		float z;
		z = x * x * x + 4;
		z = fabs(z);
		y = (23.0 / 7.0) * z;
	}
	printf("%.3f\n", y);

	return 0;
}