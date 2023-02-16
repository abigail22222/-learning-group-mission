#include<stdio.h>
//三位数，百位与个位相等；四位数，千位与各位相等，百位与十位相等
void  palindromeNumber()
{
	int a;
	for(a=200;a<1000;a++)
	{
		if(a/100==a%100%10)
		{
			printf("%d\n",a);
		}
		
	}
	for(a=1000;a<=3000;a++)
	{
		if( (a/1000==a%1000%100%10) && (a/100%10 == a%100/10%10) )
		{
			printf("%d\n",a);
		}
	}
	
}


int main()
{
	palindromeNumber();
	return 0;
 } 
