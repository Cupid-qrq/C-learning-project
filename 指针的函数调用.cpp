#include<stdio.h>


void founder(int arr[], int len, int* max, int* min);
int main()
{
	int arr[5] = { 23,546,798,32,80 };
	int len = sizeof(arr) / sizeof(int);
	
	int max = 0;
	int min = 0;

	founder(arr, len, &max, &min);

	printf("最大值是%d\n", max);
	printf("最小值是%d", min);
	return 0;

}

void founder(int arr[], int len, int* a, int* b)
{
	*a = arr[0];
	*b = arr[0];
	for (int i = 0; i < len; i++)
	{
		if (arr[i]>*a)
		{
			*a = arr[i];
		}
	}
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < *b)
		{
			*b= arr[i];
		}
	}
}

