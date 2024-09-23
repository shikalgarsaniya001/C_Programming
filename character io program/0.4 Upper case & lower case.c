#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0';
    printf("\n Enter a character :");
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z')
    {
        printf("\n  given letter %c is uppercase",ch);
    }
    else if (ch>='a' && ch<='z')
    {
        printf("\n  given letter %c is lowercase",ch);
    }
    else if (ch>='0'&& ch<=9)
    {
        printf("\n given letter is %c is digit ",ch);
    }
    else
    {
        printf("\n other ");
    }
    getch();
    return 0;
}

