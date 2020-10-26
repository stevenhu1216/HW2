#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int hours;
	float hourlyrate,s,sadd,stotal;
	printf("Enter # of hours worked(-1 to end):");
	scanf_s("%d", &hours);
	while (hours != -1)
	{
		printf("Enter hourly rate of the worker($00.00):");
		scanf_s("%f", &hourlyrate);
		if (hours > 40)
		{
			s = 40 * hourlyrate;
			sadd = (hours - 40)*1.5*hourlyrate;
			stotal = s + sadd;
			printf("slary is $%.2f\n", stotal);
		}
		else {
			s= hours * hourlyrate;
			printf("slary is $%.2f\n", s);
		}
	 printf("Enter # of hours worked(-1 to end):");
	 scanf_s("%d", &hours);
	}
	system("pause");
	return 0;
}