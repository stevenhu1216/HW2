#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i,j;
	printf("(a)\n");
	for (i = 1; i <=10; i++)
	{
		for (j = 1; j <=10; j++)
		{
			if (i>=j)
			{
				printf("*");
				
			}
			else 
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	//---------------------------------
	printf("(b)\n");
	for (i = 10; i >= 1; i--)
	{
		for (j = 1; j <= 10; j++)
		{
			if (i >= j)
			{
				printf("*");

			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	//---------------------------------
	printf("(c)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (i <= j)
			{
				printf("*");

			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	//------------------------------------
	printf("(d)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 10; j >= 1; j--)
		{
			if (i >= j)
			{
				printf("*");

			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
}