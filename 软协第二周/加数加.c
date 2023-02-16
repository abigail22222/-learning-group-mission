#include<stdio.h>
#include<math.h>
int main()
{
int a,n,s,i=0,t=1;
scanf("%d %d",&a,&n);

do{

i=10*i+t;
t=t+1; 
s=i*a;

}while(t<=n);

printf("%d",s);


return 0;
}

