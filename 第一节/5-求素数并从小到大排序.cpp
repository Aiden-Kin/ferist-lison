#include <stdio.h>
#include <math.h>

int main()
{
	int a[10], i, b[10]{0}, bcont;

	int prime(int a[], int b[]);
	void stbsoet(int a[], int n);

	for (i = 0; i < 10; i++)   
	{
		scanf("%d", &a[i]);
	}

	bcont = prime(a, b);		//��a�����������жϲ�����b  ��bΪ������

	stbsoet(b, bcont);			//����

	for (i = 0; i < bcont; i++)
	{
		printf("%5d", b[i]);
	}


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
		for (j = 3; j < a[i]/2; j += 2)
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

void stbsoet(int a[], int n)  //nΪ����λ��
{
	int i, j, t;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				t = a[i];

				a[i] = a[j];

				a[j] = t;
			}
		}

	}

}

