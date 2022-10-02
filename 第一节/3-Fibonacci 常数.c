#include <stdio.h>
#include <math.h>

int main()		
{
	double n1,n2,n3;

	double ratio2=2, ratio1=1;

	for(n1=1,n2=1,n3=1;;)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;

		ratio2 = n1 / n2;
		if (fabs(ratio2 - ratio1) < 1e-5) break;
		ratio1 = ratio2;


		

	}
	printf("³£Êý=%.3f\n", ratio2);

	return 0;
}
