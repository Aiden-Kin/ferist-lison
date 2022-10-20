#include <stdio.h>
#include <math.h>

int main()
{
	int 计数器,数字,判断;

	printf("Input your password:\n");

	for (计数器 = 1; 计数器 <= 6; 计数器++)
	{
		判断 = scanf("%d", &数字);

		while (判断 != 1)
		{
			printf("error\n");
			getchar();
			判断 = scanf("%d", &数字);
			
		}
		printf("%d, you have enter %d-bits number\n", 数字, 计数器);
	}
	


	return 0;
}
