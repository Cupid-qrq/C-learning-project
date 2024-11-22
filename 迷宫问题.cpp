/*�Թ����⡣����ҳ�����ڣ����ϽǷ��񣩾����Թ�������ڣ����½Ƿ��񣩵�����·�����Թ�����ʾ�����·�����������ʾ��0����ʾ�ĵط��ǲ�����ͨ�еģ�ֻ�ܴ�1�ߵ��������ڣ��������ϡ��¡��������ڣ���1�ϣ��Ҳ������ظ�·����
�Թ�����ʾ��ͼ��
1 0 0 0 0 0 0 0 0 0
1 0 1 1 0 1 1 1 1 0
1 1 1 0 0 1 1 0 1 0
1 0 0 1 1 1 0 0 1 0
1 1 1 1 0 1 1 1 1 0
0 0 0 0 0 0 0 0 1 1

�������ɼ��������Թ����������������Լ��Թ���ͼ����

ʾ��
���룺(ǰ��λ���ֱַ�Ϊ�Թ�������������)
6 10
1 0 0 0 0 0 0 0 0 0
1 0 1 1 0 1 1 1 1 0
1 1 1 0 0 1 1 0 1 0
1 0 0 1 1 1 0 0 1 0
1 1 1 1 0 1 1 1 1 0
0 0 0 0 0 0 0 0 1 1
�������ı�š�·������
1
1 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0
1 0 0 1 1 1 0 0 0 0
1 1 1 1 0 1 1 1 1 0
0 0 0 0 0 0 0 0 1 1
2
1 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 1 1 1 0
1 0 0 0 0 1 1 0 1 0
1 0 0 1 1 1 0 0 1 0
1 1 1 1 0 0 0 0 1 0
0 0 0 0 0 0 0 0 1 1
3
1 0 0 0 0 0 0 0 0 0
1 0 0 0 0 1 1 1 1 0
1 0 0 0 0 1 0 0 1 0
1 0 0 1 1 1 0 0 1 0
1 1 1 1 0 0 0 0 1 0
0 0 0 0 0 0 0 0 1 1

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_row 20
#define MAX_col 20

int maze[MAX_row][MAX_col];
int solution[MAX_row][MAX_col];
int row, col;
int pathnumber = 0;


void input_maze(void)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &maze[i][j]);
            solution[i][j] = 0;
        }
    }
}

void print_maze(void)
{
    printf("%d\n",++pathnumber);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d", solution[i][j]);
            if (j != (col - 1))
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int issafe(int x, int y)
{
    return((x >= 0 && x < row) && (y >= 0 && y < col) && maze[x][y] == 1 && solution[x][y] == 0);
}

void findpath(int x, int y)
{
    if (x == (row - 1) && y == (col - 1))
    {
        solution[x][y] = 1;
        print_maze();
        solution[x][y] = 0;
        return;
    }

    solution[x][y] = 1;

    if (issafe(x + 1, y))
    {
        findpath(x + 1, y);
    }

    if (issafe(x, y - 1))
    {
        findpath(x, y - 1);
    }

    if (issafe(x, y + 1))
    {
        findpath(x, y + 1);
    }

    if (issafe(x - 1, y))
    {
        findpath(x - 1, y);
    }

    solution[x][y] = 0;
}

int main()
{
    scanf("%d %d", &row, &col);

    input_maze();

    findpath(0, 0);

    return 0;
}
