#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main()
{
	int n = 0;
	int req=1;
	int i = 0;
	printf("������һ��ֵ:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		req *= (i+1);
	}
	printf("n����ֵΪ��%d\n", req);
	return 0;
}