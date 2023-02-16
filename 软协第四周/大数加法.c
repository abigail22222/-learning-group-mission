//大数的加法
#include<string.h>
#include<stdio.h>
int set0(int*num,int len)///将元素设置为0 
{
	int i;
	for(i=0;i<len;i++)
	{
		num[i]=0;
	}
	
}

int max(int a,int b)///比较大小，返回大值 
{
	int ret;
	if(a>b)
	{
		ret=a;
	}else
	{
		ret=b;
	}
	return ret;
}

 void add (char* str1,char*str2)
 {
 	int a[1000];
 	int b[1000];
 	int c[1000];
 	
 	set0(a,1000);
 	set0(b,1000);
 	set0(c,1000);
 	printf("%s+%s= ",str1,str2);
 	
 	int i;
	 int carry=0;
	 
	 int len1=strlen(str1);
	 int len2=strlen(str2);
	 int len=max(len1,len2);
	 
	 for(i=0;i<len1;i++)
	 {
	 	a[i]=str1[len1-1-i]-'0';
	 }
	 for(i=0;i<len2;i++)                       //两数末尾对齐，从末端开始逐个相加
	 {
	 	b[i]=str2[len2-1-i]-'0';
	 }
	 for(i=0;i<len;i++)
	 {
	 	c[i]=(a[i]+b[i]+carry)%10;
	 	carry=c[i]=(a[i]+b[i]+carry)/10;
	 }
	 if(carry!=0)
	 {
	 	c[len++]=1;           //有进位向高位进1  
	 }
	 for(i=len-1;i>=0;i--)
	 {
	 	printf("%d",c[i]);
	 }
	 printf("\n");
	 
	 
 }
int main()
{
	char str1[1000];
	char str2[1000];
	scanf("%s",str1);
	scanf("%s",str2);
	add(str1,str2);
	
	
	 
	return 0;
 } 
