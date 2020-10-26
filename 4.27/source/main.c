#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c;
	for (a = 3; a<=500; a++)
	{
		for (b = 3; b <= 500; b++)
		{
			for (c = 3; c <= 500; c++)
			{
				if ((c*c == a * a + b * b)&&(b>a))
				{
					printf("%d,%d,%d\n", a,b,c);
				}
			}
		}
		
	}

	system("pause");
	return 0;
}