/*
小偷计划偷窃沿街房屋。
每间房内都藏有一定的现金,影响你偷窃的唯一制约因素就是相邻的房屋装有相互连通的防盗系统，
如果两间相邻的房屋在同一晚上被小偷闯入,系统会自动报警。
给定一个代表每个房屋存放金额的非负整数数组，计算能够偷窃到的最高金额.
*/

//动态规划问题入门

//1.确定每一个小问题的表示状态:dp[i]表示偷了第i家后的总钱数

/*2.确定状态转移方程:
	dp[i]=max{dp[i-1],dp[i-2]+a[i]}
*/

/*3.确定边界条件
	dp[1]=a[0]
	dp[2]=max{a[0],a[1]}
	当i>=3,满足上式
*/


#include<stdio.h>
#include<stdlib.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int how_steal(int* arr, int len, int* memory);

int moneylist[] = { 2,7,9,3,1 };
int len = sizeof(moneylist) / sizeof(moneylist[0]);

//记忆化搜索来优化递归时间 
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






