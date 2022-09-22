#include<stdio.h>
#include<math.h>

int main()
{
	float x, y;

	scanf("%f", &x);

	if ( x < 0)
	{
		float z;
		z =  x + 1;
		y = fabs(z);
		printf("x=%.2f,f=%.2f\n", x, y);
	}
	else if (0<=x && x<=5)
	{
		y = 2*x +1;
		printf("x=%.2f,f=%.2f\n", x, y);
	}
	else if ( x > 5)
	{

		y = sin(x);
		y = y + 5;
		printf("x=%.2f,f=%.2f\n", x, y);
	}


	return 0;
}