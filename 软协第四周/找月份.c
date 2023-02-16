#include<stdio.h>

int search(int key,int* amount,int length)
{
	int ret=-1;
	int i;
	for(i=0;i<length;i++)
	{
		if(key==amount[i])
		{
			ret=i;
			break;
		}
		
	}
	return ret;
}

int main()
{
    int amount[]={1,2,3,4,5,6,7,8,9,10,11,12};
    char* name[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int month;
    scanf("%d",&month);
    int length=sizeof(amount)/sizeof(amount[0]);
    int i=search(month,amount,length);
    if(i>-1)
    {
    	printf("%s\n",name[i]);
	}else{
		printf("没有这个月\n");
	}
   
    return 0; 
}

