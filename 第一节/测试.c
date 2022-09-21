#include "stdio.h"

int main()

{

    int n;

    scanf("%d", &n);

    if (n++ < 5)printf("%x\n", n);

    else printf("%x\n", n--);

    return 0;

}