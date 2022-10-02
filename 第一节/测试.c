#include <stdio.h>
#include <math.h>

int main()

{
    int  i;

    for (i = 1; i + 1; i++)

        if (i > 4) { printf("%d", i++); break; }

    printf("%d", i++);

    return 0;

}