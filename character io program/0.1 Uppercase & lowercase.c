#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0';
    printf("\n Enter a character :");
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z')
    {
        printf("\n uppercase");
    }
    else if (ch>='a' && ch<='z')
    {
        printf("\n lowercase");
    }
    else
    {
        printf("\n other ");
    }
    getch();
    return 0;
}
