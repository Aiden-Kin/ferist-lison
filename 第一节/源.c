#include <stdio.h>

int main()		//������
{
	int a, b, c;

	int max(int x, int y);

	scanf  (" %d %d",&a,&b);

	c = max(a, b);

	printf("maxValue=%d\n", c)




return 0;
}

int max(int x, int y)//max ���� ȡ���ֵ����
{
	int z;

	if (x > y)
		z = x;

	else z = y;
	
	return z;
}
