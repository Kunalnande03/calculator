#include<stdio.h>
void main()
{
  int data[2][3],i,j,sum;
  for(i=0;i<3;i++)
  {
     for(j=0;j<3;j++)
     {
        printf("\nEnter data in [%d][%d]",i,j);
        scanf("%d"&data[i][j]);
     }
  }
  
  printf("\n Rows Wise Sum");
  for(i=0;i<3;i++)
  {
     sum=0;
     for(j=0;j<3;j++)
     {
        sum+=data[i][j];
     }
     printf("\n Sum is %d",sum);
  }
  
  printf("\n===============");
  printf("\n Column Wise Sum ");
  for(i=0;i<3;i++)
  {
     sum=0;
     for(j=0;j<3;j++)
     {
        sum+=data[j][i];
     }
     printf("\n Sum is %d",sum);
  }
}