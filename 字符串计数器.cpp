#include<stdio.h>
#include<ctype.h>
int main()
{
	/**********  Begin  **********/
	int cnt[37]={0};
    char c;
    while( (c=getchar()) !=  '\n')
    {
        if(isalpha(c))
        {
            cnt[toupper(c)-'A'+10]++;
        }else if(isdigit(c))
        {
            cnt[c-'0']++;
        }else
        {
            cnt[36]++;
        }
    }

    for(char i='0';i<='9';i++)
    {
        if(cnt[i-'0'])
        {
            printf("%c:%d\n",i,cnt[i-'0']);
        }
    }

      for(char i='A';i<='Z';i++)
    {
        if(cnt[i-'A'+10])
        {
            printf("%c:%d\n",i,cnt[i-'A'+10]);
        }
    }

    printf("others:%d\n",cnt[36]);
	
	/**********  End  **********/
	return 0; 
}

