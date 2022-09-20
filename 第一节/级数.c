#include <stdio.h>
int main()
{
	float up = 1, down = 2, sum = 1, term;
	while (down <= 100)
	{
//		up = -up;
		term = up / down;
		sum = sum + term;
		down = down + 1;

	}
	printf("the number is%lf", sum);
}