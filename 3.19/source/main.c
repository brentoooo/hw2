#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float r,j,i;
	int d;
	i = 0;
	while (i != -1)
	{
		printf("enter loan principal (-1 to end)\n");
		scanf_s("%f", &i);
		if (i == -1)
		break;
		printf("enter interest rate\n");
		scanf_s("%f", &r);
		printf("enter term of the loan in days\n");
		scanf_s("%d", &d);

		j = i*r*d / 365;
		printf("the interset is : %f\n", j);
	}
	system("pause");
	return 0;
}