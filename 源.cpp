#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//����
	int arr[10] = { 0 };

	//��������
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//�ȴ�С
	int max = arr[0];//�����һ�����
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];//�Ƚϴ�С
		}
	}
	//���
	printf("max=%d\n", max);
	return 0;
}