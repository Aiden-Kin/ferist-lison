#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char s[100], str[100];

	int i, j;

	gets(s);

	for (i = 0,j=0; s[i] != '\0'; i++)
	{
		if ((i+1)%2==0)
		{
			str[j] = s[i];

			j++;

		}
		
	}
	str[j] = '\0';

	puts(str);

	return 0;
}