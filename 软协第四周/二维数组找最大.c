#include<stdio.h>

int main()
{
	int m,n;   //m���У�n����
	scanf("%d %d",&m,&n);
	int to_found[m][n];
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			int x;
			scanf("%d",&x);
			to_found[i][j]=x;
		}
		
	}
	
	int max1=0,max2=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(to_found[max1][max2]<to_found[i][j])   //���ֱȴ�С�ķ�ʽ�������һά�������Ŀһ��ԭ�� 
			{
				max1=i;     //�����0��ʼ����� 
				max2=j;
			}
			
		}
		
	}
	
	printf("max=%d,row=%d,col=%d",to_found[max1][max2],max1+1,max2+1);
	
	return 0;
 } 
