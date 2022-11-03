#include <stdio.h>
#include <math.h>

int cont;

int main()
{
	int a[1000]={0}, b[1000]={0},bcont;

	for (int i = 0; i < 1000; i++)
		a[i] = i;

	int prime(int a[],int b[]);

	bcont = prime(a, b);					//bcont为素数个数  a 传入数据集合， b 传出素数数据集

	for (int k = 0; k < bcont; k++)
		printf("%4d ", b[k]);
	printf("\n%4d ", cont);

	

	return 0;
}


int prime(int a[], int b[])		// 素数函数，a[]为传入数列 b[]为传出素数数列
{
	int i, j, bcont = 0, m;

	for (i = 0; i < 1000; i++)			//10 为a[]数组的个数
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
