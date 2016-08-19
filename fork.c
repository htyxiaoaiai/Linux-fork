/*************************************************************************
	> File Name: fork.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2016年06月26日 星期日 16时49分19秒
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
int main()
{
	int g_value = 100;
	pid_t id = fork();
	if(id < 0)
	{
		//创建进程失败
		printf("error\n");
	}
	else if(id == 0)
	{
		//child
		g_value = 200;
		printf("this is child:pid:%d,ppid%d \n",getpid(),getppid());
	}
	else
	{
		//father
		printf("this is father:pid:%d,ppid%d\n",getpid(),getppid());
	}
	printf("g_value = %d\n",g_value);
	return 0;
}
