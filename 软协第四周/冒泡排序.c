#include<stdio.h>

int main()
{
	const int size=10;
	int battle[size];
	
	int i,j,t;
	for(i=0;i<size;i++)
	{
		scanf("%d",&battle[i]);	 //����Сֵ�� 
	}
	 ////////9��ѭ����ÿһ��ѭ����������9-j�αȽ�  
	 for(j=0;j<size-1;j++)
	 {
	 	for(i=0;i<size-1-j;i++)
	 	{
	 		if(battle[i]<battle[i+1])
	 		{
	 		    t=battle[i];
	 			battle[i]=battle[i+1];
	 			battle[i+1]=t;
			 }
	 		
		 }
	 	
	 } 
	for(i=0;i<size;i++)
	{
		printf("%d ",battle[i]);
	}
	
	return 0;
 } 
