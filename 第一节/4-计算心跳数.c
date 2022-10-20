#include <stdio.h>
#include <math.h>

int main()
{
	int byear, tyear,age,n;
	long int beates;
	printf("Input your birth year:");

	scanf("%d",&byear );

	printf("Input this year:");

	scanf("%d", &tyear);

	age = tyear - byear;

	for (n=0; byear < tyear; byear++)
	{
		if (byear % 400 == 0 || byear % 4 == 0 && byear % 100 != 0)
		{
			n++;
		}

	}

	beates = age * 39420000 + n * 108000;

	printf("The heart beats in your life: %lu", beates);

	return 0;
}
