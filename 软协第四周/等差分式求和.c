#include<stdio.h>

void Dengchafenshuqiuhe(int n)
{
	
	double s=1.0;
	double j=1.0;
	double t=1;
	int b=0;
	int a=1;
	
	for(b=1;b<=n;b++)
	{		
		a=a+2;
		t=(double)b/(double)a;
		j=j*t;
		s=s+j;
	}
	printf("%.10lf",s);
}

int main()
{
	int n;
	scanf("%d",&n); 
	Dengchafenshuqiuhe(n);//等差分数求和的拼音 
	return 0;
}
