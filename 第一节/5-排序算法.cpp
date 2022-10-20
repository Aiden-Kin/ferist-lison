#include "stdio.h"   

void main()

{

    int x[50], y, n, i, j;

    printf("请输入数组元素的个数：");

    scanf("%d", &n);

    printf("输入%d个从大到小排好顺序的整数\n", n);

    for (i = 0; i < n; i++)

        scanf("%d", &x[i]);

    printf("请输入一个待插入的整数： ");

    scanf("%d", &y);

    for (i = n - 1; i >= 0; i--)

        if (y > x[i])       x[i + 1] = x[i];  //i 是当前比较数组

        else break;

    x[i + 1] = y;       //插入后一个数组中

    for (i = 0; i < n + 1; i++)

        printf("%4d", x[i]);

    printf("\n");

}