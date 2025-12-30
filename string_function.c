#include<stdio.h>
void main()
{
    int len;
    char str1[15],str2[15],full_name[30];
    printf("\nEnter Your First Name ");
    scanf("%s",&str1);
    printf("\nEnter Your Last Name ")
    scanf("%s",&str2);
    //Length Function
    len=strlen(str1);
    
    printf("\n Name : %s",str1);
    printf("\n Length is : %d",len);

    //Concatinate Function

    strcat(str1,str2);
   
    printf("\n Name : %s",str1);
    printf("\n Name : %s",str2);
    
    //Copy Function
 
    strcpy(full_name,fname);
    
    strcat(full_name," ");
    strcat(full_name,str2);
  
    printf("\nFull Name %s",full_name);  
  
}