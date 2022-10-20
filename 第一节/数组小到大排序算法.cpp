#include <stdio.h>
#include <math.h>

int main()
{
	int a[8]{ 1,2,5,3,6,4,8,6 },i;

	void stbsoet(int a[],int n);

	stbsoet(a,8);

	for (i = 0; i <8 ; i++) printf("%d", a[i]);

	return 0;
}

void stbsoet(int a[],int n)  //n为数组位数
{
	int i,j,t;

	for (i = 0; i < n-1; i++)
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

