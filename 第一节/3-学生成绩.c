#include <stdio.h>
#include <math.h>

int main()
{
	float scr=0,ave=0, s = 0;
	int n=0,i=0;
	
	printf("请输入若干学生成绩，以负数结束:\n");

	do
	{
		scanf("%f", &scr);
		if (scr == -1)break;
		i++;
		s += scr;
		if(scr >= 80 && scr < 90) n++;
			
		
	} while (1);
		
	if (s!=0)
		ave = s / i;
	
	printf("ave=%.2f,n=%d\n", ave, n);

	return 0;
}
