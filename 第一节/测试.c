#include "stdio.h"

#include "string.h"

int main()

{

    char str1[80], str2[80];

    int i, n;

    gets(str1);

    scanf("%d", &n);

    for (i = 0; i < n; i++)

    {

        str2[i] = str1[i];

    }

    str2[i] = '\0';

    printf("%s\n", str2);

    return 0;

}