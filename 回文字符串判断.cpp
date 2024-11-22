#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

int isPalindrome(char arr[],int len);

int main()
{
    char* c=(char*)malloc(SIZE*sizeof(char));
    scanf("%s",c);
    int len;
    for(len=0;len<SIZE;len++)
    {
        if(*(c+len)=='\0')
        { break; }
    }
    if(isPalindrome(c,len))
    {
        printf("Yes");
    }else
    {
        printf("No");
    }
	return 0;
}
int isPalindrome(char arr[],int len)
{
    if(len<=1)
    {
        return 1;
    }
    if(arr[0]!=arr[len-1])
    {
        return 0;
    }

    return isPalindrome(arr+1,len-2);   
}
