#include <stdio.h>
#include <math.h>

int main()
{
	int ������,����,�ж�;

	printf("Input your password:\n");

	for (������ = 1; ������ <= 6; ������++)
	{
		�ж� = scanf("%d", &����);

		while (�ж� != 1)
		{
			printf("error\n");
			getchar();
			�ж� = scanf("%d", &����);
			
		}
		printf("%d, you have enter %d-bits number\n", ����, ������);
	}
	


	return 0;
}
