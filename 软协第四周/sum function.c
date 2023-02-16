#include<stdio.h>

int mysum(int n)
{
	int ele=0,ret=0; 
	while(ele<=n)
	{
		ret=ret+ele;
		ele++; 
	}
	return ret;
}

int main()
{
	int n;
	scanf("%d",&n);
	int sum=mysum(n);//ÀÛ¼Óº¯Êý 
	printf("%d",sum);
	return 0;
 } 
