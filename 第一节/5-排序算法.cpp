#include "stdio.h"   

void main()

{

    int x[50], y, n, i, j;

    printf("����������Ԫ�صĸ�����");

    scanf("%d", &n);

    printf("����%d���Ӵ�С�ź�˳�������\n", n);

    for (i = 0; i < n; i++)

        scanf("%d", &x[i]);

    printf("������һ��������������� ");

    scanf("%d", &y);

    for (i = n - 1; i >= 0; i--)

        if (y > x[i])       x[i + 1] = x[i];  //i �ǵ�ǰ�Ƚ�����

        else break;

    x[i + 1] = y;       //�����һ��������

    for (i = 0; i < n + 1; i++)

        printf("%4d", x[i]);

    printf("\n");

}