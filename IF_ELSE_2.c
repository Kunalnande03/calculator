#include<stdio.h>
void main()
{
    int cp,sp;
    printf("\n Enter cost prize ");
    scanf("%d",&cp);
    printf("\n Enter selling prize ");
    scanf("%d",&sp);
    
    if(sp>cp)
       printf("\nProfit");
    else
       printf("\nLosse");
}