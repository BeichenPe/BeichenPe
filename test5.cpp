#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"

int main()
{
	char arr[10] = {0};
	int i = 0;

	printf("���������룺");
	for (i = 0; i < 3; i++)
	{
		 scanf("%s",arr);//�����arr�Ѿ��ǵ�ַ���ȼ���arr[0]�����Բ���Ҫ��ȡ��ַ����
		                  //getchar �ӱ�׼���루ͨ���Ǽ��̣���ȡһ���ַ����������� ASCII ֵ����Ϊ�����������õ� int temp = 0;
		                  //while ((temp = getchar()) != '\n')//��ȡ'\n',��ջ�����
		                  //  {
			              //   ;
		                  //  }


		if (strcmp(arr, "123456") == 0)  //�ȺŲ��������Ƚ��ַ������Ƚ��ַ���Ӧ��ʹ�ÿ⺯��strcmp����ȣ��򷵻�0,��һ���ַ����󣬷���������һ���ַ���С�����ظ���
		{
			printf("������ȷ��\n");
			break;
		}
		else
		{
			if (i == 2)
			{
				printf("��������������󣬽��˳�����\n");
			}
			else
				printf("����������������룺");
		}
	}

	return 0;
}