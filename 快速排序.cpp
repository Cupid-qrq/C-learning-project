//快速排序
//分治和递归实现
//partition用于找基准值并且使左边的都小于基准值，右边的都大于基准值  

#include<stdio.h>
#include<stdlib.h>

void quicksort(int* arr, int low, int high);
int partition(int* arr, int low, int high);
void swap(int* a, int* b);
void printarr(int* arr,int len);

int arr[] = { 0,10,7,8,2,4,-1,0,5,0,2,3,5 };
int len = sizeof(arr) / sizeof(arr[0]);
	
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void quicksort(int* arr, int low, int high)
{
	if (low < high) 
	{
		int p = partition(arr, low, high);

		quicksort(arr, low, p - 1);
		quicksort(arr, p + 1, high);
	}
	
}

int partition(int* arr, int low, int high)
{
	int i = low - 1;
	for (int j = low; j < high; j++)
	{
		if (arr[j]<	arr[high])
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return i + 1;
}

void printarr(int* arr,int len)
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
	quicksort(arr, 0, len-1);
	printarr(arr,len);
	
	return 0;
}
