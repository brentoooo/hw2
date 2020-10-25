#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b, c,l;
	printf("輸入a\n");
	scanf_s("%d",&a);
	printf("輸入b\n");
	scanf_s("%d", &b);
	printf("輸入c\n");
	scanf_s("%d", &c);
	if ((a > b) && (a > c))
	{
		l = a^2;
		if (l = ((b ^ 2) + (c ^ 2))		
		{
			printf("直角三角形\n");
		}
		else
		{
			printf("其他三角形\n");
		}
	}
	else if ((b > a) && (b > c))
	{
		l = b^2;
			if ((l) = ((a ^ 2) + (c ^ 2))
			{
				printf("直角三角形\n");
			}
		else
		{
			printf("其他三角形\n");
		}
	}
	else if ((c > a) && (c > b))
	{
		l = c^2;
		if ((l) = ((a ^ 2) + (b ^ 2))
		{
			printf("直角三角形\n");
		}
		else
		{
			printf("其他三角形\n");
		}
	}
	system("pause");
		return 0;
}