#include <stdio.h>
#include <math.h>

int cont;

int main()
{
	int a[1000]={0}, b[1000]={0},bcont;

	for (int i = 0; i < 1000; i++)
		a[i] = i;

	int prime(int a[],int b[]);

	bcont = prime(a, b);					//bcontΪ��������  a �������ݼ��ϣ� b �����������ݼ�

	for (int k = 0; k < bcont; k++)
		printf("%4d ", b[k]);
	printf("\n%4d ", cont);

	

	return 0;
}


int prime(int a[], int b[])		// ����������a[]Ϊ�������� b[]Ϊ������������
{
	int i, j, bcont = 0, m;

	for (i = 0; i < 1000; i++)			//10 Ϊa[]����ĸ���
	{
		if (a[i] == 2 || a[i] == 3)
		{
			b[bcont] = a[i];

			bcont++;

			continue;
		}

		m = 0;

		if (a[i] % 2 == 0|| a[i] == 1)
		{
			m = 1;
		}
		for (j = 3; j <= a[i] / 2; j += 2)
		{
			cont++;

			if (a[i] % j == 0)
			{
				m = 1;
			}

		}
		

		if (m == 1) continue;

		b[bcont] = a[i];

		bcont++;



	}

	return bcont;

}
