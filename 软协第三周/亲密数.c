#include <stdio.h>   
#include<math.h>   
int main( )      
{  
   int n,i,sum,s,k=1; //�������Ҽ���һ��K������Ҫ�����k����������ĸ�ʽ 
   for(n=2;n<=3000;n++)//��ʼ�����Ǳ���2~3000
   {    
       sum=1;  
        for(i=2;i<=sqrt(n);i++)//����һ�������������������������ֱ�ӱ������Ŀ�ܶ࣬�����˺ܶ��ʱ��
		                                //���������forѭ���������ж�n�Ƿ�Ϊ�������ġ�    
        {    
            if(n%i==0)    
                sum+=(i+n/i);    
        }    
		s=1;
         for(i=2;i<=sqrt(sum);i++)    
        {    
            if(sum%i==0)    
                s+=(i+sum/i);    
        }   
        if(n==s && n!=sum && k%2!=0)
        {
        		printf("%d����������",n);
				k=k+1;  	
		} 
		else if(n==s && n!=sum && k%2==0)
		{
		printf("%d\n",n);
		k=k+1;
		}  
	
   }
   return 0;
}

