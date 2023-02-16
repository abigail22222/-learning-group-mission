#include<stdio.h> 
int main()

{

	int a,b,t,result;

	scanf("%d %d",&a,&b);

 		while(b!=0)

    	{

			t=a%b;

			a=b;

			b=t;

	    }

	result=a;

	printf("两个数的最大公约数为%d",result);

   	return 0;

}

