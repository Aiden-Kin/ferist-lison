#include <stdio.h>
#include <math.h>

int main()
{
	int day, x = 1, thi = 0,right;

	printf("Input days:\n");

	right=scanf("%d", &day);

	while (right == 0 || day <= 0)	//�ٸ���һ�λ���
	{
		while(getchar()!='\n');		//���������ĸ��ʱ������������
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
