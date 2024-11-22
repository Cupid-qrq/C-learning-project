#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_row 20
#define MAX_col 20

int arr[MAX_row][MAX_col];
int temparr[MAX_row][MAX_col];
int row, col;

void print_arr(void);
void search_row(int n);
void search_col(int n);
void input_arr(void);

void print_arr(void)
{
    printf("\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d", temparr[i][j]);
            if (j != (col - 1))
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void input_arr(void)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
            temparr[i][j] = arr[i][j];
        }
    }

}

void search_row(int n)
{
    for (int i = 0; i < col; i++)
    {
        int cnt = 1;
        int temp = arr[n][i];
        for (int j = i + 1; j < col; j++)
        {
            if (arr[n][j] == temp || arr[n][j] == 0)
            {
                cnt++;
                if (cnt >= 3)
                {
                    for (int k = i; k <= j; k++)
                    {
                        temparr[n][k] = 0;
                    }
                }
            }
            else {
                cnt = 1;
                break;
            }
        }
    }
}


void search_col(int n)
{
    for (int i = 0; i < row; i++)
    {
        int cnt = 1;
        int temp = arr[i][n];
        for (int j = i + 1; j < row; j++)
        {
            if (arr[j][n] == temp || arr[j][n] == 0)
            {
                cnt++;
                if (cnt >= 3)
                {
                    for (int k = i; k <= j; k++)
                    {
                        temparr[k][n] = 0;
                    }
                }
            }
            else {
                cnt = 1;
                break;
            };
        }
    }
}

int main()
{
    scanf("%d %d", &row, &col);

    input_arr();

    for (int i = 0; i < row; i++)
    {
        search_row(i);
    }

    for (int i = 0; i < col; i++)
    {
        search_col(i);
    }

    print_arr();

    return 0;
}
