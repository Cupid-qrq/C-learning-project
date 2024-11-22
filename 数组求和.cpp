#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
 	int num[10]={0};
 	int len= sizeof(num)/sizeof(int);
 	int sum;
 	
 	srand(time(NULL));
 	for(int i=0; i<len ;i++)
	{
		int random = rand()%100+1;
		num[i] = random;
		printf("%d ",num[i]);	
		sum+=num[i];
	}	
 	
 //	for( int i=0 ;i<10 ;i++)
 //	{
 //		sum+=num[i];	
 //	}
	printf("\n%d",sum);
 	return 0;
 
}
