#include<stdio.h>
int delete_max (int a[],int length);

int main()
{
	const int size=10;
	int delmax[size];/////////����һ������ 
	
	int i;
	for(i=0;i<size;i++)//////////����ֵ 
	{
		int num;
		scanf("%d",&num);
		delmax[i]=num;
	}
	
	int max=delete_max(delmax,size);//////////����������ҵ������Ǹ� 
	
	for(i=0;i<size;i++)
	{
		if(i!=max)                    //��������� 
		{
			printf("%d ",delmax[i]);
		}
	} 

	return 0;
 } 	
 
 int delete_max (int a[],int length)
	{
		int maxid=0;////////�������ǵ����࣬�Ǹ�ѡ������ 
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
