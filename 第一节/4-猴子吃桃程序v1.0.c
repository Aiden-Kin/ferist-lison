#include <stdio.h>
#include <math.h>

int main()
{
	int day,x=1,thi=0;

	printf("Input days:\n");

	scanf("%d",&day);

	for (thi = 1; thi < day; thi++)
	{
		x = (x + 1) * 2;
	}

	printf("x=%d\n", x);


	return 0;
}
