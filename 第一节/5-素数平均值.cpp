#include <stdio.h>
#include <math.h>

int main()
{
	int a[10], i, j,bcont=0,sum=0,m,mark=0;

	for (i = 0; i < 10; i++)

		scanf("%d", &a[i]);

	for (i = 0; i < 10; i++)
	{
		if(a[i]==2||a[i] == 3)		//如果出现3和2算作素数
		{
			bcont++;
			sum += a[i];
			continue;
			
		}

		m = 0;									//素数标记
		if (a[i]==1 || a[i] % 2 == 0)m = 1;		//排除偶数和1
		for (j = 3; j < a[i]; j += 2)			//二分法
		{

			if (a[i] % j == 0)
			{
				m = 1;							//标记
			}
		}

		if (m==1)			
		{
			continue;
		}
		bcont++;
		sum += a[i];


	}



	float ave;							//计算

	ave = (float) sum / bcont;


	printf("%.2f\n", ave);

	return 0;
}
