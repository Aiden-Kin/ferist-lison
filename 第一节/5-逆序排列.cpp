#include <stdio.h>
#include <math.h>

int main()
{
	int a[10],i,temp;
	
	printf("Please input 10 numbers£º\n");

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 5; i++)
	{
		temp = a[i];

		a[i] = a[9 - i];

		a[9 - i] = temp;


	}


	for (i = 0; i < 10; i++)
	{
		printf("%5d", a[i]);
	}
	return 0;
}
