#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int x=0;
	int t=1;
	int cnt=0;
	float i=100.0;
	do{
		cnt++;
		if(cnt>1){
			x=x+2*i;
			i/=2;
		}else{      //////第一次的处理 
			x=i;
			i/=2;
		}
	}while(cnt<n);
	if(i<25){
		printf("经过%d米，第%d次反弹%.1f米高\n",x,n,i);////////////i比25小的时候就不是整数了 
	}else{
		printf("经过%d米，第%d次反弹%d米高\n",x,n,(int)i);
	}
	return 0;
 } 
