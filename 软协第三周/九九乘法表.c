#include<stdio.h>

int main()
{	 
	int i,j,x;
	for(i=1;i<10;i++){
		for(j=1;j<=i;j++){
			x=i*j;
			printf("%d*%d=%d ",i,j,x);		
		}
		printf("\n");
	}
	return 0;
 } 
