#include<stdio.h>

int searchfx(int keyword,int a[],int length)
{
	int ret=-1;        //�Ҳ����Ƿ���ֵ����-1 
	int i;
	for(i=0;i<length;i++)
	{
		if(a[i]==keyword)   //һ��һ������ 
		{
			ret=i+1;       //������������������Ǵ�0��ʼ���� 
			break;        //�ҵ�֮���˳�ѭ�� ������ֵ�����±����1��������� 
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
	////////////////�����Ƕ�����Ĵ��� 
	
	int keyword;
	scanf("%d",&keyword);
	
	int keyip=searchfx(keyword,wait_search,size);
	
	printf("%d",keyip);
	
	return 0;
}
