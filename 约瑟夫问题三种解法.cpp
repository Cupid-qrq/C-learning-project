#include<stdio.h>
#include<stdlib.h>
#define Max 100

int Josephus(int sum, int num);

int main()
{
	int sum = 0,num = 0;
	scanf("%d %d", &sum,&num);
	
	//�����ѭ��
	//printf("the last one's people is %d.", Josephus(sum,num)+1);
	
	//�ݹ� 
	//printf("\nthe last one's people is %d.", Josephus(sum,num)+1);
	
	//��ѧ�����ӵ�ѭ��
	printf("the last one's people is %d.", Josephus(sum,num)+1);

	return 0;
}


//�����ѭ�����Լɪ������
int Josephus(int sum, int num)
{
	int arr[sum] = { 0 };
	int arrindex = 0,index=1, count = 0;

	while (count < sum-1)
	{
		if (arr[arrindex] == 0)
		{
			if (index == num)
			{
				printf("%6d",arrindex+1)
				arr[arrindex] = 1;
				count++;
				index=1;
			}
		}
		if(arr[arrindex]!=1) index++;
		arrindex = (arrindex + 1) % sum;
	}

	for (int i = 0; i < sum; i++)
	{
		if(arr[i]==0) return i;
	}
	return 0;
}

//�����ݹ��� 
int Josephus(int sum,int num)
{
	if(sum==1)
	{
		return 0;
	}else
	{
		return (Josephus(sum-1,num)+num)%sum;
	}
}


//��ѭ����� 
int Josephus(int sum,int num)
{
	int index=0;
	for(int i=2;i<=sum;i++)
	{
		index=(index+num)%i;
	}
	return index;
	
	
	
}
