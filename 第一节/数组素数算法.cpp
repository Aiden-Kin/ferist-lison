#include <stdio.h>
#include <math.h>

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9}, b[10]={0},bcont;

	int prime(int a[],int b[]);

	bcont = prime(a, b);					//bcontΪ��������  a �������ݼ��ϣ� b �����������ݼ�

	for (int k = 0; k < bcont; k++)

		printf("%4d", b[k]);

	return 0;
}


int prime(int a[], int b[])		// ����������a[]Ϊ�������� b[]Ϊ������������
{
	int i, j, bcont = 0, m;

	for (i = 0; i < 10; i++)			//10 Ϊa[]����ĸ���
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
		for (j = 3; j < a[i]; j += 2)
			if (a[i] % j == 0)
			{
				m = 1;
			}

		if (m == 1) continue;

		b[bcont] = a[i];

		bcont++;



	}

	return bcont;

}
