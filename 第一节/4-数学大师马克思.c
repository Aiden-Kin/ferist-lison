#include <stdio.h>
#include <math.h>

int main()
{
	int people = 30,mony=50;

	int man=0, woman, child;
	printf("Man   Women   Children\n");

	for (man = 0; man <= 30; mony=50,man++)
	{
	
		for (woman = 0; woman <= 30-man; woman++)
		{
	
			for (child = 0; child <= 30-man-woman; child++)
			{
				mony = 50 - (man*3+woman*2+child);
				if (mony==0&&(man+woman+child)==30)
				{
					printf("%3d%8d%8d\n", man, woman, child);
					
				}

			}
		}
	}

	return 0;
}
