#include <stdio.h>
#include <math.h>

int main()
{
	float x=0, y=0,ans;

	printf("Please input x and y:\n");

	scanf ("%f,%f", &x,&y);

	ans = pow(x, 2) + pow(y, 2);

	printf("Result=%.2f\n",ans);

	return 0;
}