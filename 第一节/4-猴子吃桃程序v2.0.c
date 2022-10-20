#include <stdio.h>
#include <math.h>

int main()
{
	int day, x = 1, thi = 0,right;

	printf("Input days:\n");

	right=scanf("%d", &day);

	while (right == 0 || day <= 0)	//再给你一次机会
	{
		while(getchar()!='\n');		//清除输入字母的时产生垃圾数据
		printf("Input days:\n");
		right=scanf("%d", &day);

	}

	for (thi = 1; thi < day; thi++)
	{
		x = (x + 1) * 2;
	}

	printf("x=%d\n", x);


	return 0;
}
