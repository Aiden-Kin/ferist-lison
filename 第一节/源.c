#include <stdio.h>

int main()		//主函数
{
	int a, b, c;

	int max(int x, int y);

	scanf  (" %d %d",&a,&b);

	c = max(a, b);

	printf("maxValue=%d\n", c)




return 0;
}

int max(int x, int y)//max 两数 取最大值函数
{
	int z;

	if (x > y)
		z = x;

	else z = y;
	
	return z;
}
