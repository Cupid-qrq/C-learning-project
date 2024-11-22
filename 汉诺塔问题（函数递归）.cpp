#include<stdio.h>
#include<stdlib.h>

void move(int, int, int, int);
int main()
{
	int n, a = 'A', b = 'B', c = 'C';
	scanf("%d", &n);

	move(n, a, b, c);
	return 0;
}

void move(int n, int a, int b, int c)
{
	static int cnt = 1;
	if (n == 1)
	{
		printf("step %d: %c-->%c\n", cnt++, a, c);
	}
	else
	{
		move(n - 1, a, c, b);
		printf("step %d: %c-->%c\n", cnt++, a, c);
		move(n - 1, b, a, c);
	}
}
