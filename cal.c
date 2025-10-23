#include<stdio.h>
void main()
{
 int a,b,res;
 char c;
 printf("\n+ Add, - substaract, x Multiplay, / Devide"); 
 printf("\nSelect your choice");
 scanf("&c",%c);
 if(c=='+')
   res=a+b;
 else if(c=='-')
   res=a-b;
 else if(c=='x')
   res=a*b;
 else if(c=='/')
   res=a/b;
 else
  printf("\n Select your Choice");
 printf("\n Result = %d",res);
}