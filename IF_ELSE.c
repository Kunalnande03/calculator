#include<stdio.h>
void main{
   int temp;
   printf("\n Enter Tempreture ");
   scanf("%d",&temp);
   if(temp>0)
       printf("\n Above freezing point");
   else if(temp==0)
       printf("\n Freezing point");
   else
       printf("\n Below freezing point");
}