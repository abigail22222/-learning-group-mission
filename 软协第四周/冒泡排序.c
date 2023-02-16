#include<stdio.h>

int main()
{
	const int size=10;
	int battle[size];
	
	int i,j,t;
	for(i=0;i<size;i++)
	{
		scanf("%d",&battle[i]);	 //赋个小值吧 
	}
	 ////////9次循环，每一次循环里面又有9-j次比较  
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
