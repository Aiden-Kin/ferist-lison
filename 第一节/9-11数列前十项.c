#include <stdio.h>
#include <math.h>

int main()
{
	int i, j;

	double fun(int n);


	for(i=1;i<=10;i++)
	printf("%10.5f", fun(i));

	return 0;
}

double fun(int n)
{
	float s;

	if (n == 1 )		//��Ϊ1��ʱ�򷵻�1
		return 1;
	
	s = 1.0 / (1 + fun(n - 1));		//�����ݹ�

	return s;

}