#include <stdio.h>
#include <math.h>
int main()
{
	int num, a, b, c;

	scanf("%d", &num);

	num = fabs(num);

	a = num % 10;			//caculate a;main  b;miea c;max
	b = (num % 100) / 10;
	c = num / 100;

	printf("y=%d\n", a * 100 + b * 10 + c);

	return 0;
}