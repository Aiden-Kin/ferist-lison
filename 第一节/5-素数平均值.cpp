#include <stdio.h>
#include <math.h>

int main()
{
	int a[10], i, j,bcont=0,sum=0,m,mark=0;

	for (i = 0; i < 10; i++)

		scanf("%d", &a[i]);

	for (i = 0; i < 10; i++)
	{
		if(a[i]==2||a[i] == 3)		//�������3��2��������
		{
			bcont++;
			sum += a[i];
			continue;
			
		}

		m = 0;									//�������
		if (a[i]==1 || a[i] % 2 == 0)m = 1;		//�ų�ż����1
		for (j = 3; j < a[i]; j += 2)			//���ַ�
		{

			if (a[i] % j == 0)
			{
				m = 1;							//���
			}
		}

		if (m==1)			
		{
			continue;
		}
		bcont++;
		sum += a[i];


	}



	float ave;							//����

	ave = (float) sum / bcont;


	printf("%.2f\n", ave);

	return 0;
}
