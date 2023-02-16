#include <stdio.h>   
#include<math.h>   
int main( )      
{  
   int n,i,sum,s,k=1; //在这里我加了一个K，我需要用这个k来控制输出的格式 
   for(n=2;n<=3000;n++)//开始，还是遍历2~3000
   {    
       sum=1;  
        for(i=2;i<=sqrt(n);i++)//我用一个开方来求因数，这个方法比直接遍历来的快很多，减少了很多的时间
		                                //这里的两个for循环是用来判断n是否为亲密数的。    
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
        		printf("%d的亲密数是",n);
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

