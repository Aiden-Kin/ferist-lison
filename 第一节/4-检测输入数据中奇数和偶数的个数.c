#include <stdio.h>
#include <math.h>

int main()
{
	int n,count=1,odd=0,even=0,t=1;

	printf("Please enter the number:\n");

	scanf("%d", &n);

	if (n == -1)
	{
		printf("over!\n");
		count = 0;
	}

	while(count==1)
	{

		if(t>1)scanf("%d", &n);

		if (n % 2 == 1)
		{
			printf("%d:odd\n", n);
			odd++;
		}
		if (n%2==0)
		{
			printf("%d:even\n", n);
			even++;
		}
		t++;
	
		if (n == -1)break;
	}	

	printf("The total number of odd is %d\n",odd );

	printf("The total number of even is %d\n",even);
	return 0;
}
