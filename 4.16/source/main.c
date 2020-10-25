#include<stdio.h>
#include<stdlib.h>
int main(void)
{   
	int i, j, k, g;
	k = 1;
	g = 0;
	char a = ' ';
	printf("(A)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("(B)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 10; j > i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("(C)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%c", a);
		}
		for (j = 10; j > i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("(D)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 10; j > i; j--)
		{
			printf("%c", a);
		}
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}