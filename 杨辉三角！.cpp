#include<stdio.h>

int main()
{
	int row;
	scanf("%d", &row);
    int triangle[row][row];
								
	for (int i = 0; i < row; i++)
	{
		triangle[i][0] = 1;
		triangle[i][i] = 1;
		for (int j = 1; j < i; j++)
		{
			triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
		}
	}

	for (int a = 0; a < row; a++)
	{
		for (int b = 0; b < (row - a - 1) * 2; b++)
		{
			printf(" ");
		}
		for (int c = 0; c <= a; c++)
		{
			printf("%-4d", triangle[a][c]);
		}
		printf("\n");
	}

	return 0;
}
