#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	int n1 = 0;//��ĸ����
	int n2 = 0;//�ո����
	int n3 = 0;//����
	int n4 = 0;//�����ַ�
	char arr[100] = { 0 };
	
	gets(arr);
	for (i = 0; i < strlen(arr); i++)
	{
		if ((arr[i] >= 'a'&& arr[i] <= 'z')||(arr[i] >= 'A' && arr[i]<='Z'))//������ĿҪ������������͵��ַ��жϲ���������
            
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
