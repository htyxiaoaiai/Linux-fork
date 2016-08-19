/*************************************************************************
	> File Name: vfork.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Mon 04 Jul 2016 09:50:09 PM CST
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t id = vfork();
	if(id < 0)
	{
		//创建进程失败
		printf("error\n");
	}
	else if(id == 0)
	{
		//child
		printf("this is child:pid:%d,ppid%d \n",getpid(),getppid());
		sleep(2);
		exit(1);
	}
	else
	{
		//father
		printf("this is father:pid:%d,ppid%d\n",getpid(),getppid());
	}
	return 0;
}
