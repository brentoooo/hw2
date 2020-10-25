#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float r, j;
	int i;
	i = 0;
	while (i != -1)
	{
		printf("enter # of hours worked (-1 to end)\n");
		scanf_s("%d", &i);
		if (i == -1)
			break;
		printf("enter hourly rate of the worker (00.00)\n");
		scanf_s("%f", &r);

		j = i * r;
		printf("salary is : %f\n", j);
	}
	system("pause");
	return 0;
}