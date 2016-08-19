/*************************************************************************
	> File Name: test.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2016年06月17日 星期五 11时14分54秒
 ************************************************************************/

#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
	int i = 0;
	for(; i < 3; i++)
	{
		pid_t id = fork();
		if( id < 0)
		{
			//error
			printf("error\n");
		}
		else if(id == 0)
		{
			//child
			printf("child: %d fatherID: %d \n",getpid(),getppid());
		}
		else
		{
			//father
			printf("father: %d fatherID: %d \n",getpid(),getppid());
		}
	}
	return 0;
}
