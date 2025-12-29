#include<stdio.h>
void main()
{
    char ch;
    printf("\nEnter an alphabet ");
    scanf("%c",&ch);
    if(isalpha(ch))
    {
         if(isupper(ch))
             printf("\nCapital Alphabet");
         else
             printf("\nSmall Alphabet");    
    }
    else if(isdigit(ch))
         printf("\nDigit");
    else if(isspace(ch))
         printf("\nSpace");
    else
         printf("\nSymbol");
}