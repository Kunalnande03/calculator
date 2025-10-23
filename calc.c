#include<stdio.h>
int a,b,res;
void add()
{
  printf("\n Enter any tow number ");
  scanf("%d,%d",&a,&b);
  res=a+b;
  printf("\n Sum is %d",res);
}

void sub()
{
  printf("\n Enter any tow number ");
  scanf("%d,%d",&a,&b);
  res=a-b;
  printf("\n Subtraction is %d",res);
}

void mul()
{
  printf("\n Enter any tow number ");
  scanf("%d,%d",&a,&b);
  res=a*b;
  printf("\n Multiplication is %d",res);
}

void div()
{
  printf("\n Enter any tow number ");
  scanf("%d,%d",&a,&b);
  res=a/b;
  printf("\n Division is %d",res);
}
void main()
{
  
  char c;
  do
  {
    printf("\n+. Add );
    printf("\n-. Substract );
    printf("\nX. Multiplay );
    printf("\n/. Divide );
    printf("\nE. Exit );
    scanf("%c",&c);
    if(c=='+')
        add();
    else if(c=='-')
        sub();
    else if(c=='X')
        mul();
    else if(c=='/')
        div();      
  }while(c!='E');
}