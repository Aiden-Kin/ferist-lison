#include <stdio.h>
#include <math.h>

int main()
{
	int n,x,times=0,a[10],i; //����10��a����ռ�

	printf("Please enter the number:\n");

	scanf("%d", &n);

	x = abs(n);
	
	for (i = 0; i <= 9; i++)//����ÿ��a����ռ��ʼ��Ϊ0
	{
		a[i] = 0;
	}

	while (x != 0)			
	{
		for (i = 0; i < 9; i++)		//����ÿ��������
		{
			if (x % 10 == i) a[i]++;
		}

		x /= 10;		//λ��������
		times++;		//�����м�λ
	}
	printf("%d: %d bits\n", n,times);

	for (i = 0; i < 10;i++)		
	{
		if (a[i] != 0)				//��ʼ�������ų�
		{
			printf("%d: %d\n", i, a[i]);
		}
	}


	return 0;
}
