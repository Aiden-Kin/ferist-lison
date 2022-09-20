#include <stdio.h>
#include <math.h>
int main()
{
	const int num = 4321;

	int a, b, c, d;

	a = num % 10;			//caculate a;main  b;miea c;max
	b = (num % 100) / 10;
	c = (num % 1000) / 100;
	d = (num / 1000);

	int frt, bak;
	float chu;

	frt = d * 10 + c;
	bak = b * 10 + a;

	chu =(float) frt/bak;


	printf("a=%d,b=%d\n", frt, bak);

	printf("a+b=%d\n",frt+bak);
	printf("a-b=%d\n",frt-bak);
	printf("a*b=%d\n",frt*bak);
	printf("a/b=%.2f\n",chu);
	printf("a%%b=%d\n",frt%bak);



	return 0;
}