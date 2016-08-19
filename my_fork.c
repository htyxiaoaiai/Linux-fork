/*************************************************************************
	> File Name: my_fork.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2016年07月03日 星期日 10时58分35秒
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
		return 1;
	}
	else
	{
		//father
		printf("this is father:pid:%d,ppid%d\n",getpid(),getppid());
	}
	return 0;
}
