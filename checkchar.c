#include<stdio.h>
int main()
{
    char ch;
    printf("enter the values==");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    {
    printf("%c is an capital letter",ch);
    }
    else if(ch>=97&&ch<=112)
    {
        printf("%c is an small letter alphabet",ch);
    }
    else if(ch>=48&&ch<=57)
    {
        printf("%c is an digits",ch);
        
    }
    else
    {
        printf("%c is an special character",ch);
    }
    
    return 0;
}
