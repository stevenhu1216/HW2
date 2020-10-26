#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a,s;
	printf("Enter sales dollars(-1 to end):");
	scanf_s("%f", &a);
	while (a != -1)
	{
		s = (a*0.09) + 200;
		printf("salary is:%.2f\n",s );
		printf("Enter sales dollars(-1 to end):");
		scanf_s("%f", &a);
	}
	system("pause");
	return 0;
}