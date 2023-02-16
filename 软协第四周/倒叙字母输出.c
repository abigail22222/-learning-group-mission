#include<stdio.h>
#include<string.h>

  
void reverse(char *left,char *right)  //交换得传址 
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
	gets (arr);//scanf满足不了我的要求 
	//整体倒置
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	                //每个单词逆序
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

