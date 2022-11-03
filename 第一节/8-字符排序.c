#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char s[100];
	int i, j,k,t;

	gets(s);

	for (i = 1; s[i] != '\0'; i++);

	for (j = 0; j < i; j++)
		for (k = j; k < i; k++)
		{
			if(s[j]>s[k])
				{
				t = s[j];
				s[j] = s[k];
				s[k] = t;
				}
		}

	puts(s);


	return 0;
}