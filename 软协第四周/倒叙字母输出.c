#include<stdio.h>
#include<string.h>

  
void reverse(char *left,char *right)  //�����ô�ַ 
{
	char temp = 0;
	while (left < right) {
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
 
int main()
{
	char arr[100] = { 0 };
	gets (arr);//scanf���㲻���ҵ�Ҫ�� 
	//���嵹��
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	                //ÿ����������
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start,end -1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}
	printf("%s\n", arr);
 
	return 0;
}

