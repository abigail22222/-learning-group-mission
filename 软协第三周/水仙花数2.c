#include<stdio.h>

int main()
{
	int x,t,a,b,c;  ////a,b,c:个 十 百 
	for(x=100;x<1000;x++){
	
		a=x%10;
		b=x/10%10;
		c=x/100;
		t=a*a*a+b*b*b+c*c*c;  ////是立方和 
		if(x==t){
			printf("%d\n",t);
		} 
    }
	return 0;
}
