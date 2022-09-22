#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c, d, n;
	int count=0;

	int sum(int x, int y );		//声明运算符
	int sub(int x, int y);
	int multi(int x, int y);
	float dev(int x, int y);
	int mod(int x, int y);

	printf("Please input n:\n");//提示信息

	scanf("%d",&n);		//输入

	int front, back;

	if (n < 0)			//符号情况
	{
		count = 1;
		n = fabs(n);	//绝对
	}


	a = n / 1000;			//数位拆分
	b = (n % 1000) / 100;
	c = (n % 100) / 10;
	d = n % 10;


	front = a * 10 + b;		//组合
	back = c * 10 + d;

	if (count==1)			//符号归位
	{
		front = -front;
		back = -back;
	}

	int su, sb, mult,mo;
	float de;

	su = sum(front, back);		//计算	
	sb = sub(front, back);
	mult = multi(front, back);
	

	printf("%d,%d\n", front, back);

	printf("sum=%d,sub=%d,multi=%d\n",su,sb,mult);

	if (back == 0)		//除数0情况		
	{
		printf("The second operator is zero!\n");
	}
	else
	{
		de = dev(front, back);
		mo = mod(front, back);
		printf("dev=%.2f,mod=%d\n",de,mo);
	}

	


	return 0;
}

int sum(int x, int y)		//定义运算符
{
	int z;
	z = x + y;
	return (z);
}

int sub(int x, int y)
{
	int z;
	z = x - y;
	return (z);
}

int multi(int x, int y)
{
	int z;
	z = x * y;
	return (z);
}

float dev(int x, int y)
{
	float z;
	z =(float)x / (float) y;
	return (z);
}

int mod(int x, int y)
{
	int z;
	z = x % y;
	return (z);
}