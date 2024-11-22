#include<stdio.h>
#include<math.h>


int isprime(int a);
int main()
{
	int m;
	scanf("%d", &m);

	for (int i = 2;  pow(2, i) - 1 <= m ; i++)
	{
		int flag = 1;
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag && isprime(pow(2, i) - 1))
		{
			printf("M(%d)=%.0lf\n", i, pow(2, i) - 1);
		}
	}

	return 0;
}

int isprime(int a)
{
	for (int i = 2; i * i < a; i++)
	{
		if (a % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
