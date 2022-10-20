#include <stdio.h>
#include <math.h>

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10}, i, j, n = 0, sum = 0, b[10];

    float ave;


    for (i = 0; i < 10; i++)
    {
        for (j = 2; j < a[i]; j++)

            if (a[i] % j == 0)break;

        if (j == a[i])
        {
            sum += a[i];
            n++;
            printf("%d\n", a[i]);
        }
    }

   


    ave = (float)sum / n;

    printf("%.2f\n", ave);

    return 0;
}