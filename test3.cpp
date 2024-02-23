#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10 };
    int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	int x = 0;

	printf("请输入：");
	scanf("%d", &x);
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > x)
		{
			right = mid;
		}
		else if (arr[mid] < x)
		{
			left = mid;

		}
		else
		{
			printf("找到了，下标为：%d\n", mid);
			break;
		}
	}
	return 0;
}
