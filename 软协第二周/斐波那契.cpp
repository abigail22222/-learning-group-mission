#include <stdio.h>

unsigned Fib(unsigned n)    //�������� 
{
 if(n>2)
  return Fib(n-1)+Fib(n-2);
 else
  return 1;
}



int main(void)
{
 unsigned n,value;
 
 scanf("%d",&n);
 value=Fib(n);
 printf("�� %d ����Ϊ��%d\n",n,value);
 return 0; 
}
