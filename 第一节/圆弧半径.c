#include <stdio.h>

int main()
{
	const double pi = 3.14159,  r = 5.3;

	double area, ference;

	area = (pi * r * r)/2;

	ference = (2 * r * pi)/2;

	printf("Area=%.5f\n",area);

	printf("circumference=%.5f\n",ference);

	return 0;

}