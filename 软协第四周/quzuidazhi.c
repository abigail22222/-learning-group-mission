#include<stdio.h>
int delete_max (int a[],int length);

int main()
{
	const int size=10;
	int delmax[size];/////////定义一个数组 
	
	int i;
	for(i=0;i<size;i++)//////////赋个值 
	{
		int num;
		scanf("%d",&num);
		delmax[i]=num;
	}
	
	int max=delete_max(delmax,size);//////////用这个函数找到最大的那个 
	
	for(i=0;i<size;i++)
	{
		if(i!=max)                    //不输出最大的 
		{
			printf("%d ",delmax[i]);
		}
	} 

	return 0;
 } 	
 
 int delete_max (int a[],int length)
	{
		int maxid=0;////////和上面那道题差不多，是个选择排序 
		int i; 
		for( i=0;i<length;i++)
		{
			if(a[maxid]<a[i])
			{
				maxid=i;
			}
		}
		return maxid;
		
	}
