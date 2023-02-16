#include<stdio.h>

int minnum(int a[],int length)
{
	int i;
	int min=0;
	for(i=0;i<length;i++)
	{
			if(a[min]>a[i])///////先认为首个是最小的，如果比第二个大，就认为第二个是最小的 
		{
			min=i;
		}
		
	}
	
	return min; //////返回最小的那个下标 
}

int main()
{
	int size;
	scanf("%d",&size);/////////先输入数组的大小 
	
	int some[size];///////////定义变长数组  C99可以 
	
	int i;
	for(i=0;i<size;i++)///////初始化数组 
	{
		int num; 
		scanf("%d",&num);
		some[i]=num;
	}
	
	int result=minnum(some,size);/////利用返回值 
	printf("%d",some[result]); 
	
	return 0;
 } 
