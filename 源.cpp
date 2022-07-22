#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("计算1!+2!+...+10!");
	int n = 0;
	

		int m = 1;
		int a = 1;
		int sum = 0;
		for(n = 1;n<=10;n++)
		{
			while (m < n + 1)
			{

				a = a * m;
				m++;
			}
			sum = sum + a;
		}
		
		
		printf("结果为 %d", sum);
      return 0;
}