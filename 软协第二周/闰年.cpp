#include<stdio.h>

int main()
{
	int year;
	scanf("%d",&year);
	 
	if( (year%4!=0)||(year%100==0&&year%400!=0) ){
		
		printf("不是闰年！\n"); 
	}else{
		printf("是闰年！\n"); 
	}
	
	
	return 0;
 } 
