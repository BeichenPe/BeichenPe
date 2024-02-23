#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"

int main()
{
	char arr[10] = {0};
	int i = 0;

	printf("请输入密码：");
	for (i = 0; i < 3; i++)
	{
		 scanf("%s",arr);//这里的arr已经是地址，等价于arr[0]，所以不需要加取地址符号
		                  //getchar 从标准输入（通常是键盘）读取一个字符，并返回其 ASCII 值（作为整数）。常用的 int temp = 0;
		                  //while ((temp = getchar()) != '\n')//读取'\n',清空缓冲区
		                  //  {
			              //   ;
		                  //  }


		if (strcmp(arr, "123456") == 0)  //等号不能用来比较字符串，比较字符串应该使用库函数strcmp，相等，则返回0,第一个字符串大，返回正，第一个字符串小，返回负。
		{
			printf("密码正确！\n");
			break;
		}
		else
		{
			if (i == 2)
			{
				printf("三次密码输入错误，将退出程序！\n");
			}
			else
				printf("密码错误，请重新输入：");
		}
	}

	return 0;
}