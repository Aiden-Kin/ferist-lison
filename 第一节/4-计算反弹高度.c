#include <stdio.h>
#include <math.h>

int main()
{
	int times,time;
	printf("Input:\n");

	scanf("%d",&times);

	printf("%d times:\n", times);

	float through, hight=100;

	for (through = 0, time = 1; time < times; time++)//�����߹��߶�
	{
		hight = hight / 2;

		through += 2*hight;
	}
	printf("%.3f\n", through+100);

	printf("%.3f\n", hight/2);		//������һ�θ߶�

	return 0;
}
