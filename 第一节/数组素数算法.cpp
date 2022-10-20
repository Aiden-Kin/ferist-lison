#include <stdio.h>
#include <math.h>

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9}, b[]={0};

	void prime(int a[],int b[]);

	prime(a, b);

	for (int k = 0; k < 10; k++)

		printf("%4d", b[k]);

	return 0;
}

void prime(int a[], int b[])		// 素数函数，a[]为传入数列 b[]为传出素数数列
{
	int i,j,bcont=0,m;

	for (i=0; i < 10; i++)			//10 为a[]数组的个数
	{
		if (a[i] == 1 || a[i] == 3)
		{
			b[bcont] = a[i];

			bcont++;

			continue;
		}

		m = 0;

		if (a[i] % 2 == 0)
		{
			m=1;
		}
		for(j=3;j<10;j+=2)
			if (a[i] % j == 0)
			{
				m=1;
			}
		
		if (m == 1) continue;

		b[bcont] = a[i];

		bcont++;

		

	}


}