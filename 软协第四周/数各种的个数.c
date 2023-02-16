#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	int n1 = 0;//字母个数
	int n2 = 0;//空格个数
	int n3 = 0;//数字
	int n4 = 0;//其他字符
	char arr[100] = { 0 };
	
	gets(arr);
	for (i = 0; i < strlen(arr); i++)
	{
		if ((arr[i] >= 'a'&& arr[i] <= 'z')||(arr[i] >= 'A' && arr[i]<='Z'))//根据题目要求进行四种类型的字符判断并计算数量
            
		{
			n1++;
		}
		else if(arr[i]==' ')
		{
			n2++;
		}
		else if (arr[i] >= '0' && arr[i] <= '9')
		{
			n3++;
		}
		else
		{
			n4++;
		}
	}
	printf("%d %d %d %d", n1, n3, n2, n4);
		return 0;
}
