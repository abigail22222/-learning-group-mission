#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	scanf("%s",str);
	
	int len=strlen(str);   //���Լ��������ʵ�ʳ��� 
	int i;
	for(i=len-1;i>=0;i--){
		printf("%c",str[i]);
	}
	
	
	return 0;
}
