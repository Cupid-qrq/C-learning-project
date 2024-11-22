#include<stdio.h>
#define MAX_LEN 50000


int main()
{

	int m;
	scanf("%d", &m);

	int arr[MAX_LEN] = { 0 };
	int cnt = 0;
	for (int i = 2; i <= m; i++)
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
		if (flag)
		{
			arr[cnt] = i;
			cnt++;
		}
	}
	
	for (int i = 0; i < cnt-1; i++)
	{
		if (arr[i + 1] - arr[i] <= 2)
		{
			printf("{%d,%d}\n", arr[i], arr[i + 1]);
		}
	}

	return 0;
}
