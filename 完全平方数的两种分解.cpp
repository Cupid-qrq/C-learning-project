#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, c;
	scanf("%d", &a);

	for (int i = 1; i*i <= a; i++)
	{
		int j = i * i;
		b = 0;
		while (b * b * 10 <= j)
		{
			c = (int)sqrt(j - b * b * 10);
			if ((c * c == j - b * b * 10)&& c<i )
			{
				printf("%d=%d*%d=%d*%d*10+%d*%d\n", j, i, i, b, b, c, c);
				break;
			}
			b++;
		}
	}



	return 0;
}
