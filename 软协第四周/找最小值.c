#include<stdio.h>

int minnum(int a[],int length)
{
	int i;
	int min=0;
	for(i=0;i<length;i++)
	{
			if(a[min]>a[i])///////����Ϊ�׸�����С�ģ�����ȵڶ����󣬾���Ϊ�ڶ�������С�� 
		{
			min=i;
		}
		
	}
	
	return min; //////������С���Ǹ��±� 
}

int main()
{
	int size;
	scanf("%d",&size);/////////����������Ĵ�С 
	
	int some[size];///////////����䳤����  C99���� 
	
	int i;
	for(i=0;i<size;i++)///////��ʼ������ 
	{
		int num; 
		scanf("%d",&num);
		some[i]=num;
	}
	
	int result=minnum(some,size);/////���÷���ֵ 
	printf("%d",some[result]); 
	
	return 0;
 } 
