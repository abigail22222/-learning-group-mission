#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	int sum;
	int SUM=0;
	int x;
	for(x=1;x<=n;x++){
		sum=sum+x;           ///////sum����������� 
		SUM=SUM+sum; ///////SUM��ÿ��������� 
	}
	printf("%d",SUM);
	
	
	
	
	return 0;
 } 
