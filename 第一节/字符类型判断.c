#include <stdio.h>
#include <math.h>

int main()
{

	char ch;

	printf("Input simple:\n");


	scanf("%c", &ch);

	
	if ('A' <= ch && ch <= 'z') printf("It is an English character.\n");

	else if ('0' <= ch && ch <= '9') printf("It is a digit character.\n");

	else printf("It is other character.\n");

	return 0;
}
