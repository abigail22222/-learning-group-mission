#include<stdio.h>
//��λ������λ���λ��ȣ���λ����ǧλ���λ��ȣ���λ��ʮλ���
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
