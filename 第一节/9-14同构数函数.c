#include <stdio.h>
#include <math.h>

int main()
{
	int i;

	int fun(int n);

	for(i=1;i<=1000;i++)
	{
		if(fun(i))
		{
			printf("%8d",i);
		}
	}
	return 0;
}


int fun(int n) 
{
	int t,i,n1,count,sq,a;
	sq = n * n;	             //存放n平方
	n1 = n;

	for (count = 0; n1; count++)	//检查n位数，cont计数
	{
		n1=n1 / 10;
	}
	
	a = pow(10, count);			//保留相应位数，直接if比较是否相等

	t = sq % a;

	if (t == n)
		return 1;



	return 0;
}