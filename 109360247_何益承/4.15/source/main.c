#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a;
	a = 1;
	float i, j;
	j = 0.105;
	i = 5000;
	while (a != 16)
	{
		i = i * j + i;
		j += 0.005;
		a++;
	}
	printf("%f",i);
	system("pause");
	return 0;
}