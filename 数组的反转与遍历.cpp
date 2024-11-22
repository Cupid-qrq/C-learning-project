#include<stdio.h>
void printarr(int arr[], int len);
int main()
{
	int arr[5] = { 0 };
	int len = sizeof(arr) / sizeof(int);

	for (int i = 0; i < len; i++)
	{
		printf("请输入第%d个数据\n", i + 1);
		scanf("%d",&arr[i]);
	}

	printarr(arr,len);
	
	int a = 0;
	int b = len - 1;
	int j = 0;
	while (a < b)
	{
		j = arr[a];
		arr[a] = arr[b];
		arr[b] = j;
		a++;
		b--;
	}

	printarr(arr, len);

	return 0;
}

void printarr(int arr[], int len)
{
	for (int i = 0; i < len;i++)
	{
		printf("%d ", arr[i]);
	}
}
