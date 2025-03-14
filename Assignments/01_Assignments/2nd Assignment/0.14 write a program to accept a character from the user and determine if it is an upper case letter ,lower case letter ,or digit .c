#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;

    printf("\n Enter a character :");
    scanf("%c",&ch);

    if(ch>='A'&& ch<='Z')
    {
        printf("\n The character '%c' is Upper case",ch);
    }
    else if( ch>='a' && ch<='z')
    {
        printf("\n The character '%c' is Lower case",ch);
    }
    else
    {
        printf(" \n The character '%c' is Not a letter",ch);
    }
    getch();
    return 0;
}

