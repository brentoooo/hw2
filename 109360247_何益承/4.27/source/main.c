#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b, c,l;
	printf("��Ja\n");
	scanf_s("%d",&a);
	printf("��Jb\n");
	scanf_s("%d", &b);
	printf("��Jc\n");
	scanf_s("%d", &c);
	if ((a > b) && (a > c))
	{
		l = a^2;
		if (l = ((b ^ 2) + (c ^ 2))		
		{
			printf("�����T����\n");
		}
		else
		{
			printf("��L�T����\n");
		}
	}
	else if ((b > a) && (b > c))
	{
		l = b^2;
			if ((l) = ((a ^ 2) + (c ^ 2))
			{
				printf("�����T����\n");
			}
		else
		{
			printf("��L�T����\n");
		}
	}
	else if ((c > a) && (c > b))
	{
		l = c^2;
		if ((l) = ((a ^ 2) + (b ^ 2))
		{
			printf("�����T����\n");
		}
		else
		{
			printf("��L�T����\n");
		}
	}
	system("pause");
		return 0;
}