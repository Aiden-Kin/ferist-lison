#include <stdio.h>
#include <math.h>

int main()
{
	printf("����������������:");
	int a, b,r=1;

	scanf("%d%d",&a,&b);

	
do
	{

		r = a % b;
		a = b;

		b = r;  


} while (r != 0);

		
	printf("gcd=%d\n",a);

	return 0;
}
