#include <stdio.h>
#include <math.h>

int main()
{
	printf("Please enter the coefficients a,b,c:\n");

	float a, b, c;
	float root, x1, x2,p,q;

	scanf("%f,%f,%f", &a, &b, &c);

	root = (b * b - 4 * a * c);

	if (root < 0)
	{
		printf("error!\n");
	}
	else
	{	
		root = sqrt(root);
		p = -b /( 2 * a);
		q = root /( 2 * a);

		x1 = p + q;
		x2 = p - q;
		printf("x1=%7.4f, x2=%7.4f\n", x1, x2);

	}


	return 0;
}
