#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i, j;
	char a = ' ';
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 11; j++)
		{
			if ((i == 1) && (j == 1) || (i == 1) && (j == 2) || (i == 1) && (j == 3) || (i == 1) && (j == 4) || (j == 5) && (i == 1) || (j == 6) && (i == 1) || (j == 7) && (i == 1) || (i == 1) && (j == 8) || (i == 1) && (j == 9))
			{
				printf("%c", a);
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}