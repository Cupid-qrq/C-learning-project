//��ʿѲ������
//�޶�ֻ�����ұ�������
//���ݷ�ʵ��

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int n, m;
int step[100][2];
int dx[] = { 1,2,2,1 };
int dy[] = { 2,1,-1,-2 };


int In_chessboard(int x, int y);
void Print_path(int step[][2], int n);
void Jump(int t);


int In_chessboard(int x, int y)
{
	if (x > 0 && x <= n)
	{
		if (y > 0 && y <= m)
			return 1;
	}

	return 0;
}

void Print_path(int step[][2], int n)
{
	static int cnt = 1;

	printf("��%d��·����\n", cnt);
	cnt++;

	printf("(%d,%d)", step[0][0], step[0][1]);

	for (int i = 1; i <= n; i++)
	{
		printf("-->(%d,%d)", step[i][0], step[i][1]);
	}
	printf("\n");
}

void Jump(int t)
{
	if ((step[t][0] == n) && (step[t][1] == m))
	{
		Print_path(step, t);
	}
	else
	{
		for (int p = 0; p < 4; p++)
		{
			if (In_chessboard(step[t][0] + dx[p], step[t][1] + dy[p]))
			{
				step[t + 1][0] = step[t][0] + dx[p];
				step[t + 1][1] = step[t][1] + dy[p];

				Jump(t + 1);
			}
		}
	}
}

int main()
{
	printf("����������������\n");
	scanf_s("%d %d", &n, &m);
	step[0][0] = 1;
	step[0][1] = 1;

	Jump(0);

	return 0;
}

