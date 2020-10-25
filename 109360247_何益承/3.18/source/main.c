#include <stdio.h>
#include <stdlib.h>
int main()
{
	float i,j;
	i = 0.00;
	
	while (i != -1.0)
	{
		printf("enter sales in dollars\n");
		scanf_s("%f", &i);
		if (i == -1)
			break;
		j = i* 0.09 + 200;
		printf("salary is : %0.2f\n",j);

	} 
	system("pause");
	return 0;
}