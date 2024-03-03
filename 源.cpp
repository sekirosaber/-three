#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//数组
	int arr[10] = { 0 };

	//输入数字
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//比大小
	int max = arr[0];//假设第一个最大
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];//比较大小
		}
	}
	//输出
	printf("max=%d\n", max);
	return 0;
}