#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,s,h,t,d,p,dd;
	printf("case1:manager\ncase2:hourly worker\ncase3:commission worker\ncase4:pieceworker");
	printf("\nPlease enter case(-1 to end):");
	scanf_s("%d", &a);
	while (a != -1)
	{
		switch (a)
		{
		case 1:
			printf("manager\n");
			printf("薪水:10000");
			break;
		case 2:
			printf("hourly worker\n");
			printf("一小時工資:");
			scanf_s("%d", &d);
			printf("hours:");
			scanf_s("%d", &h);
			if (h > 40)
			{
				s = 400 + (h - 40)*d*1.5;
			}
			else
			{
				s = h * d;
			}
			printf("多少薪水:%d", s);
			break;
		case 3:
			printf("commission worker\n");
			printf("請輸入銷售總額:\n");
			scanf_s("%d", &t);
			t = t * 0.057;
			s = t + 250;
			printf("多少薪水:%d", s);
			break;
		case 4:
			printf("pieceworker\n");
			printf("做一台多少元");
			scanf_s("%d", &dd);
			printf("多少製造:");
			scanf_s("%d", &p);
			s = p * dd;
			printf("多少薪水%d", s);
			break;
		default:
			printf("error");
			break;
		}
	 printf("\nPlease enter case(-1 to end):");
	 scanf_s("%d", &a);
	}
	system("pause");
	return 0;
}