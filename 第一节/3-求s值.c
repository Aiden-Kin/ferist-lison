#include <stdio.h>
#include <math.h>

int main()
{
	int n, i = 1, f;

	printf("ÇëÊäÈënµÄÖµ:");

	scanf("%d", &n);


	float s = 0.0, sum = 0.0;

	for (i = 1; i <= n; i++)
	{
		for (f = 1,s=0; f <= i; f++)
		{
			s += f;
		}
		sum += 1 / s;
	}
	



	printf("s=%f\n",sum);

	return 0;
}
