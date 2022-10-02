#include <stdio.h>
#include <math.h>

int main()
{
	int number,sum,member=1;

	printf("请输入一个正整数:");

	scanf("%d",&number);

	for (sum=0;number!=0;)
	{
		member = number % 10;

		number = number/10;

		sum += member *member	;


	}

	printf("s=%d\n",sum);

	return 0;
}
