#include<stdio.h>
#include<stdlib.h>


void printarr(int* arr, int len);
void bubblesort(int* arr, int len);

int arr[] = { 0,10,7,8,2,4,-1,0,5,0,2,3,5 };
int len = sizeof(arr) / sizeof(arr[0]);


void bubblesort(int* arr,int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printarr(int* arr, int len)
{
	printf("sorted array is:\n");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	bubblesort(arr, len);
	printarr(arr, len);

	return 0;
}




