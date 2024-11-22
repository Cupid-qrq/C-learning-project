#include<stdio.h>
#include<math.h>
int main()
{
	int m;
	scanf("%d", &m);

	int arr[m+1] = { 0 };
	int i,j,cnt = 0;
	arr[0] = 1;
	arr[1] = 1;

	for ( i = 2; i <= sqrt(m); i++)
	{
		if (arr[i] != 1)
		{
			j = 2;
			while (i * j <= m)
			{
				arr[i * j] = 1;
				j++;
			}
		}
	}
	

	for (i = 0; i < m; i++)
	{
		if (!arr[i])
		{
			printf("%4.d ", i);
			cnt++;
			if(cnt % 10 == 0)
			{
				printf("\n");
			}
		}
	}
	return 0;
}

