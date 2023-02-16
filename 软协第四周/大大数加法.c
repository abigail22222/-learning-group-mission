#include<stdio.h>
#include<string.h>


int main()
{
	char arr1[1000] = { 0 };
	char arr2[1000] = { 0 };//初始化数组
	int arf1[1000] = {0};
	int arf2[1000] = {0};
	int sum[1000] = { 0 };
	int num = 0;
	int i = 0;
	gets(arr1);
	gets(arr2);//输入字符串
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	int max = 0;
	max = len1 > len2 ? len1 : len2;//计算哪个数字更长
	for (i = 0; i < len1; i++)
	{
		arf1[i] = arr1[len1 - i - 1]-'0';//字符转数字
	}
	for (i = 0;i < len2;i++)
	{
		arf2[i] = arr2[len2 - i - 1]-'0';//将字符数组中每个数字倒叙放入整形数组中
	}
	for (i = 0; i < max; i++)
	{
		num = arf1[i] + arf2[i] + num;
		if (num >= 10)
		{
			sum[i] = num % 10;//当前位数余数
			num = num / 10;//下一位进1 
		}
		else
		{
			sum[i] = num;
			num = 0;
		}
	}
	printf("%s+%s=%s\n", arr1, arr2, sum);
	if (num > 0)//最后一位进位判断
	{
		printf("%d", num);
		
		for (i = max - 1; i >= 0; i--)
		{
			printf("%d", sum[i]);
		}
	}
	else
	{
		for (i = max - 1; i >= 0; i--)
		{
			printf("%d", sum[i]);
		}
	}
	return 0;
}
