#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p =0;
	int cnt=0;
	while(p=(int*)malloc(1024*1024*100))
	{
		cnt++;
	}
	printf("%d00µÄÄÚ´æ",cnt);
	free(p);
	
	return 0;
} 
