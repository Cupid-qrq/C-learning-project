/*
С͵�ƻ�͵���ؽַ��ݡ�
ÿ�䷿�ڶ�����һ�����ֽ�,Ӱ����͵�Ե�Ψһ��Լ���ؾ������ڵķ���װ���໥��ͨ�ķ���ϵͳ��
����������ڵķ�����ͬһ���ϱ�С͵����,ϵͳ���Զ�������
����һ������ÿ�����ݴ�Ž��ķǸ��������飬�����ܹ�͵�Ե�����߽��.
*/

//��̬�滮��������

//1.ȷ��ÿһ��С����ı�ʾ״̬:dp[i]��ʾ͵�˵�i�Һ����Ǯ��

/*2.ȷ��״̬ת�Ʒ���:
	dp[i]=max{dp[i-1],dp[i-2]+a[i]}
*/

/*3.ȷ���߽�����
	dp[1]=a[0]
	dp[2]=max{a[0],a[1]}
	��i>=3,������ʽ
*/


#include<stdio.h>
#include<stdlib.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int how_steal(int* arr, int len, int* memory);

int moneylist[] = { 2,7,9,3,1 };
int len = sizeof(moneylist) / sizeof(moneylist[0]);

//���仯�������Ż��ݹ�ʱ�� 
int how_steal(int* arr,int len,int* memory)
{
	if (len == 1) {
		return arr[0];
	}
	else if(len == 2){
		return MAX( arr[0],arr[1] );
	}
	else {
		if (memory[len - 1] == 0){
			memory[len-1]=MAX(how_steal(arr, len - 1,memory), how_steal(arr, len - 2,memory) + arr[len-1]);
			return memory[len - 1];
		}
		else {
			return memory[len - 1];
		}
		
	}
}


int main()
{
	int* memory = (int*)calloc(len , sizeof(int));

	printf("the max steal money is %d.\n", how_steal(moneylist, len,memory));

	free(memory);
	return 0;
}






