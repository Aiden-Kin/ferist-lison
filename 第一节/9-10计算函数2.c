#include <stdio.h>
#include <math.h>

int main()
{
	int i, j;
	double fun(int n);

	printf("Please enter the value of n:");

	scanf("%d", &i);



	printf("s=%f\n",fun(i) );

	return 0;
}


double fun(int n)
{
	double t = 1, s = 1, i = 1;



	while (i<n)
	{
		i++;

		t += i;

		s += 1/t;

		

	}

	return s;

}