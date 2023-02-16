#include<stdio.h>

int main()
{
	int A,B;
	scanf("%d %d",&A,&B);
	double he=A+B;
	double cha=A-B;
	double ji=A*B;
	double shang=(double)A/(double)B;///////这里要是不换的话商就不准了 
	printf("%d + %d = %.2lf\n",A,B,he);
	printf("%d - %d = %.2lf\n",A,B,cha);
	printf("%d * %d = %.2lf\n",A,B,ji);
	printf("%d / %d = %.2lf\n",A,B,shang);
	return 0;
}
