#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n;
	float i,s,x;
	
	for (i = 10; i < 12.5; i=i+0.5)
	{
		x = 1;
		for (n = 1; n <= 15; n++)
		{
			x = x*(1 + i * 0.01);
		}
		s = 5000* x;
		printf("%.2f\n", s);
		
	}

	system("pause");
	return 0;
}