#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	int sum;
	int SUM=0;
	int x;
	for(x=1;x<=n;x++){
		sum=sum+x;           ///////sum是括号里面的 
		SUM=SUM+sum; ///////SUM是每个括号相加 
	}
	printf("%d",SUM);
	
	
	
	
	return 0;
 } 
