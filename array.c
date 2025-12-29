#include<stdio.h>
void main()
{
   int data1[5],data2[5],i,j=4;
   for(i=0;i<5;i++)
   {
        printf("\nEnter a value ");
        scanf("%d",&data1[i]);
   }
   for(i=0;i<5;i++)
       data2[i]=data1[j--];

   for(i=0;i<5;i++)
       printf("\nValue is %d",data2[i]);
}