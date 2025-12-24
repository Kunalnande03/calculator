#include <stdio.h>
void main()
{
    int a[2],b[2],c[2],i;
    printf("\Arrary 1");
    for(i=0;i<2;i++)
    {
        printf("\n Enter a value ");
        scanf("%d",&a[i]);
    }
    printf("\nArray 2");
    for(i=0;i<2;i++)
    {
        printf("\n Enter a value ");
        scanf("%d",&b[i]);
    }
    printf("\nSum of Array");
    for(i=0;i<2;i++)
    {
        c[i]=a[i]+b[i];
        printf("\nSum is %d",c[i]);
    }
}