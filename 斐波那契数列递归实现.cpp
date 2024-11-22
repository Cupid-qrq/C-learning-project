#include <stdio.h>
#include <stdlib.h>

#define MAX 100

long long fabonacci(int n,long long memory[]);

int main(void)
{
	int i,k;
	long long sum=0;
	scanf("%d",&k);
	long long memory[MAX]={0};
	for(i=1;i<=k;i++)
	{
		sum+=fabonacci(i,memory);
	}
	printf("%lld",sum);
	return 0;	
} 

long long fabonacci(int n,long long memory[])
{
	if(n==1||n==2) return 1;
	else if(memory[n]!=0)
	{
		return memory[n];
	}else
	{
		memory[n]= fabonacci(n-1,memory)+fabonacci(n-2,memory);
		return memory[n];
	}
}
