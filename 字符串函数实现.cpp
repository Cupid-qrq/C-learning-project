#include<stdio.h>
#include<stdlib.h>

int mystrlen(char* s);
int mystrcmp(char* s1, char* s2);
char* mystrcpy(char* s4, char* s5);

int main()
{
	char c1[] = "hello world!";
	char c2[] = "accd ";
	char c3[] = "acc ";
	char c4[] = "ase";
	char *c5 = (char*)malloc(mystrlen(c4) + 1);
	printf("length=%d\n", mystrlen(c1));
	printf("compare=%d\n", mystrcmp(c2, c3));
	mystrcpy(c5, c4);
	printf("copy=%s", c5);
	free(c5);
	return 0;
} 
int mystrlen(char* s)  //对应strlen,计算字符串长度
{
	int idx = 0;
	while (s[idx] != '\0')
	{
		idx++;
	}
	return idx;
}
int mystrcmp(char* s1, char* s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		(s1++);
		(s2++);
	}
	return *s1 - *s2;
}
char* mystrcpy(char* s4, char* s5)
{
	while (*s5)
	{
		*s4++ = *s5++;
	}
	*s4 = '\0';
	return s4;
}
