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
		}else{      //////��һ�εĴ��� 
			x=i;
			i/=2;
		}
	}while(cnt<n);
	if(i<25){
		printf("����%d�ף���%d�η���%.1f�׸�\n",x,n,i);////////////i��25С��ʱ��Ͳ��������� 
	}else{
		printf("����%d�ף���%d�η���%d�׸�\n",x,n,(int)i);
	}
	return 0;
 } 
