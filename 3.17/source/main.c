#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	float  bb, tch, tcr, cl,bl;
	printf("Enter account number(-1 to end):");
	scanf_s("%d", &a);
	while (a != -1)
	{
		
		printf("Enter beginning balance:");
		scanf_s("%f", &bb);
		printf("Enter total charges:");
		scanf_s("%f", &tch);
		printf("Enter total credits:");
		scanf_s("%f", &tcr);
		printf("Enter credit limit:");
		scanf_s("%f", &cl);
		bl = bb + tch - tcr;
		if (bl >= cl)
		{
			printf("account:%d\n", a);
			printf("credit limit:%.2f\n", cl);
			printf("balance:%.2f\n", bl);
			printf("credit limit exceed\n");
		}
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &a);
	}
	system("pause");
	return 0;
}