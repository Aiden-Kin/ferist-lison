#include <stdio.h>
#include <math.h>

int main()
{
	int n, x, i,times=0; 

	printf("Please enter the number:\n");

	scanf("%d", &n);

	x = abs(n);

	while (x != 0)
	{
	
		x /= 10;		//λ��������
		times++;		//�����м�λ
	}
	printf("%d: %d bits\n", n, times);

	return 0;
}
