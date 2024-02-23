#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "Windows.h"

int main()
{
	char arr1[] = { "Welcome To Soochow University!" };
	char arr2[] = { "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" };
	int left = 0;
	int right = strlen(arr1) - 1;
	printf("%s\n", arr2);
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		system("cls");
		Sleep(1000);
		printf("%s\n",arr2);
		Sleep(1000);
		left++;
		right--;
	}
	return 0;
}