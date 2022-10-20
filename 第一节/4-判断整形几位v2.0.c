#include <stdio.h>
#include <math.h>

int main()
{
	int n,x,times=0,a[10],i; //创建10个a数组空间

	printf("Please enter the number:\n");

	scanf("%d", &n);

	x = abs(n);
	
	for (i = 0; i <= 9; i++)//遍历每个a数组空间初始化为0
	{
		a[i] = 0;
	}

	while (x != 0)			
	{
		for (i = 0; i < 9; i++)		//计算每个数个数
		{
			if (x % 10 == i) a[i]++;
		}

		x /= 10;		//位数计算器
		times++;		//计算有几位
	}
	printf("%d: %d bits\n", n,times);

	for (i = 0; i < 10;i++)		
	{
		if (a[i] != 0)				//初始化数组排除
		{
			printf("%d: %d\n", i, a[i]);
		}
	}


	return 0;
}
