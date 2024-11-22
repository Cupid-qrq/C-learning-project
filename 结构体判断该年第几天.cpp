#include<stdio.h>

struct date { int day; int month; int year; }today;

int leap_year(int x);
int sum_day(struct date today);

int main()
{
	scanf("%d %d %d", &today.year, &today.month, &today.day);
	int i = 1;
	if (today.day > 31 || today.day < 1) { i = 0; }
    if (today.month > 12 || today.month < 1) { i = 0; }
	if (leap_year(today.year))
	{
		if (today.month == 2 && today.day > 29) { i = 0; }
	}
	else
	{
		if (today.month == 2 && today.day > 28) { i = 0; }
	}
	if (i) {
		printf("%d\n", sum_day(today));
	}
	else
	{
		printf("不存在这样的日期");
	}
	return 0;
}

int leap_year(int a)
{
	int flag = 0;
	if (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0))
	{
		flag = 1;
	}
	return flag;
 }

int sum_day(struct date today)
{
	int eachday[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (leap_year(today.year))
	{
		eachday[1] = 29;
	}
	int sum = 0;
	for (int i = 0; i < today.month-1; i++)
	{
		sum += eachday[i];
	}
	sum += today.day;
	return sum;
}
