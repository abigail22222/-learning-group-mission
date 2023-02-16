#include<stdio.h>
#include<string.h>

int figure(char s[],int len)
{
	int ret=0;
	int i;
	for(i=0;i<len;i++)
	{
		if((s[i]==' ') || (s[i]=='.') || (s[i]==','))
		{
			ret++;
		}
	}
	return ret; 
}

int main()
{
	char str[80];
	gets(str);
	int size=strlen(str);
	printf("%d",figure(str,size));
	
	
	return 0;
 } 
