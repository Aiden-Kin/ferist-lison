#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char s[40],os[40],out[80];
	int i, j,l;

	gets(s);
	
	l = strlen(s);

	for (i = 0; i < l; i++)
	{
		os[l - i-1] = s[i];

	}
	os[l] = '\0';

	strcat (os, s);

	puts(os);

	return 0;
}