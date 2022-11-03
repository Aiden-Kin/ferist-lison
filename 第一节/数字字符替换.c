#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char a[100], i, j;

	gets(a);

	for (i = 0; a[i] != '\0'; i++)
		if (a[i] >= '0' && a[i] <= '9')
			a[i] = '$';

	puts(a);

	return 0;
}
