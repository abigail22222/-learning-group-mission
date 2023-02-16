#include<stdio.h>

int main()
{ 
 
 printf("请输入五个整数：\n");
 int arr[5];
 int i; 
 for ( i = 0; i < 5; i++)
  scanf("%d", &arr[i]);
 
 
 for (i = 0; i < 5; i++)
 {
     int j;
     for (j = i+1; j < 5; j++)
   {
	   int temp = 0;
	   if (arr[i] > arr[j])
	   {
	    temp = arr[i];
	    arr[i] = arr[j];
	    arr[j] = temp;
       }
   }
 }
   
   int a,b,c,d,e;
   a=arr[0];
   b=arr[1];
   c=arr[2];
   d=arr[3];
   e=arr[4];

   printf("%d,%d,%d,%d,%d", a,b,c,d,e);
   

 return 0;
}
