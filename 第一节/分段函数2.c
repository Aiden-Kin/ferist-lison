#include<stdio.h>
#include<math.h>

int main()
{
	float x, y;

	scanf("%f", &x);

	if (0 < x && x < 5)
	{
		y = x * x + 1;
		printf("x=%.2f,y=%.2f\n", x, y);
	}
	else if (x == 0)
	{
		y = 0;
		printf("x=%.2f,y=%.2f\n", x, y);
	}
	else if (-5 < x && x < 0)
	{

		y = - x + 4;
		printf("x=%.2f,y=%.2f\n", x, y);
	}
	else
		printf("ÎÞÒâÒå");
	

	return 0;
}