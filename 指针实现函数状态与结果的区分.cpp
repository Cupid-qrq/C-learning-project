#include<stdio.h>

int remainder(int a, int b, int* c);

int main()
{
	int a = 0;
	int b = 0;
	int rem = 0;

	scanf_s("%d %d", &a, &b);

	int i = remainder(a, b, &rem);

	if (!i)
	{
		printf("ÓàÊıÊÇ%d", rem);
	}
	
	return 0;


}
int remainder(int a, int b, int* c)
{
	if (b == 0)
	{
		return 1;
	}
	*c = a % b;
	return 0;
}

