#include <stdio.h>
#include <math.h>
int main()
{
	int num, a, b, c, d;

	printf("Input x:\n");

	scanf("%d", &num);

	num = fabs(num);

	a = num % 10;			//caculate a;main  b;miea c;max
	b = (num % 100) / 10;
	c = (num % 1000) / 100;
	d = (num / 1000);

	printf("y=%d\n", a * 1000 + b * 100 + c * 10 + d);//ÄæĞòÊä³ö

	int fro, bak;

	fro = a * 10 + b;
	bak = c * 10 + d;

	printf("a=%d,b=%d\n",fro,bak );//ÄæĞò²ğ·Ö

	int sum;

	sum = fro * fro + bak * bak;

	printf("result=%d\n", sum);

	return 0;
}