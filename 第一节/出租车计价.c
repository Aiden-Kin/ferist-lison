#include <stdio.h>
#include <math.h>

int main()
{

	float distance,fee;	//ÉùÃ÷±äÁ¿
	int time,times;



	printf("Input distance and time:");

	scanf("%f,%d",&distance,&time);

	if (distance <= 3) fee = 8;

	if (distance > 3 && distance <= 10) fee = 8 + (distance - 3) * 2;

	if (distance > 10) fee = 18 + (distance - 10) * 3;

	times = time / 5;
	fee += times * 2;

	printf("fee = %.0f\n", fee);


	return 0;
}
