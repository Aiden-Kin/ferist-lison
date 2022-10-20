#include "stdio.h"

int main()

{

    int b[10], k, amax, amin;

    for (k = 0; k < 10; k++)

        scanf("%d", &b[k]);

    amax = amin = b[0];

    for (k = 1; k < 10; k++)

    {

        if (b[k] > amax)   amax = b[k];

        if (amin > b[k])   amin = b[k];

    }

    for (k = 0; k < 10; k++)

        printf("%4d", b[k]);

    printf("\nmax=%d,min=%d\n", amax, amin);

    return 0;

}