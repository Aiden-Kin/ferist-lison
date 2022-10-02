#include <stdio.h>
#include <math.h>

int main()
{
	int a, n, s, sum = 0;
	printf("请输入一个数字a和位数n:\n");
	scanf("%d%d",&a,&n );

	for (int i=1;i<=n;i++)
	{
		s = a;

		for (int f = 1; f < i; f++)
			s += a * pow(10,f);

		sum += s;

	}



	printf("s=%d\n",sum);
	return 0;
}
