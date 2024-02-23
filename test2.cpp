#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main()
{
	int i = 0;
	int req = 1;
	int sum = 0;

	for (i = 0; i < 10; i++)
	{
		req *= (i + 1);
		sum += req;
	}
	printf("%d\n", sum);

	return 0;
}