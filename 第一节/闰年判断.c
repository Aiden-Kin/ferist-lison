#include<stdio.h>
#include<math.h>

int main()
{
	int year, con;

	con = scanf("%d", &year);

	if (con == 0)
	{
		printf("Input error!\n");

		return 0;
	}
	
	if (year<=0)
	{
		printf("Input error!\n");
		return 0;
	}

	if (year%400==0 || year%4==0 && year%100 !=0)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}