#include<stdio.h>
int main()
{
	int arr1[5] = {1,2,3,4,5};
	int arr2[5] = {5,4,3,4,5};

	int* arr[2] = { arr1,arr2 };
	int** p = arr;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ",(*(*p+j)));
		}
		printf("\n");
		p++;
	}

	return 0;
}
