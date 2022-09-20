#include <stdio.h>

int main()
{
	int  b,c;
	c = 1;
	b = 2;
	while (b <= 5)
	{
		c = b * c;

		b = b + 1;
	}
	printf("the number is %d", c);

	return 0;
}