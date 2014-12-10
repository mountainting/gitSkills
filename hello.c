/*************************************************************************
    > File Name: hello.c
    > Author: gaoshan
    > Mail: mountainting@163.com 
    > Created Time: 2014年12月10日星期三 15:24:56
 ************************************************************************/

#include<stdio.h>
int main(int argc, char *argv[])
{
	int i = 0;
	printf("Hello World!\n");
	printf("Number of args: %d\n", argc);
	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}
