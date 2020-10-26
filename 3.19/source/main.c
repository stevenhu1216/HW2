#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int d;
	float l,i,ic;
	printf("Enter loan principal(-1 to end):");
	scanf_s("%f", &l);
	while (l != -1)
	{
		printf("Enter interest rate:");
		scanf_s("%f", &i);
		printf("Enter term of the loan in days:");
		scanf_s("%d", &d);
		ic = l * i*d / 365;
		printf("the interest charge is%.2f\n",ic);

		printf("Enter loan principal(-1 to end):");
		scanf_s("%f", &l);
	}
	system("pause");
	return 0;
}