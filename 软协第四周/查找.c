#include<stdio.h>

int searchfx(int keyword,int a[],int length)
{
	int ret=-1;        //找不到那返回值就是-1 
	int i;
	for(i=0;i<length;i++)
	{
		if(a[i]==keyword)   //一个一个查找 
		{
			ret=i+1;       //哈哈这里别忘了数组是从0开始数的 
			break;        //找到之后退出循环 ，返回值就是下标加上1，方便输出 
		}
		
	}
	return ret;
}

int main()
{
	int size;
	scanf("%d",&size);
	int wait_search[size];
	int i;
	for(i=0;i<size;i++)
	{
		int n;
		scanf("%d",&n);
		wait_search[i]=n;
	}   
	////////////////以上是对数组的处理 
	
	int keyword;
	scanf("%d",&keyword);
	
	int keyip=searchfx(keyword,wait_search,size);
	
	printf("%d",keyip);
	
	return 0;
}
