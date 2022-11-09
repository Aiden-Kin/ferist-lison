#include <stdio.h>
#include <math.h>

int main()
{
	int i, j;
	long fun(int n);

	for(i=1;i<21;i++)
	{
		printf("%10ld", fun(i));
		if (i % 5 == 0)
			printf("\n");
	}

	return 0;
}

long fun(int n)
{
	long numf=1,numb=0,i,numm;

	for (i = 0; i < n; i++)
	{
		numm = numf;

		numf += numb;

		numb = numm;
	}
	

	return numb;
}