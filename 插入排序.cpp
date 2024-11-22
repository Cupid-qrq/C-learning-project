#include<stdio.h>
#include<stdlib.h>


void printarr(int* arr, int len);
void insertsort(int* arr, int len);

int arr[] = { 0,10,7,8,2,4,-1,0,5,0,2,3,5 };
int len = sizeof(arr) / sizeof(arr[0]);

void insertsort(int* arr, int len)
{
	for (int j = 0; j < len - 1; j++)
	{
		for (int i = j + 1; i < len; i++)
		{
			if (arr[j] > arr[i])
			{
				int x = arr[i];
				arr[i] = arr[j];
				arr[j] = x;
			}
		}
	}
}//2,1,4,3-->1,2,4,3-->1,2,3,4

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
	insertsort(arr, len);
	printarr(arr, len);
	return 0;

}
	
	

	

