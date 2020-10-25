#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a;
	float b, t, c, n,l,d;
	a = 0;
	while (a != -1)
	{
		printf("enter account number (-1 to end)\n");
		scanf_s("%d", &a);
		if (a == -1)
			break;
		printf("enter beginning balance:\n");
		scanf_s("%f", &b);
		printf("enter total charges:\n");
		scanf_s("%f", &t);
		printf("enter total credits:\n");
		scanf_s("%f", &c);
		printf("enter credit limit:\n");
		scanf_s("%f", &l);
		d = b + t - c;
		printf("account:%d\n",a);
		printf("credit limit:%f\n", l);
		printf("balance:%f\n",d);
		if (d > l)
			printf("credit limit exceeded\n");
	}
	system("pause");
	return 0;
}