#include <stdio.h>
#include <math.h>

int main()
{
	int byear, tyear, age, n;

	printf("Input your birth year:");

	scanf("%d", &byear);

	printf("Input this year:");

	scanf("%d", &tyear);

	for (n = 0; byear <= tyear; byear++)
	{
		if (byear % 400 == 0 || byear % 4 == 0 && byear % 100 != 0)
		{
			printf("%d\n", byear);

			n++;
		}
		
	}
	printf("count=%d\n", n);

	return 0;
}
