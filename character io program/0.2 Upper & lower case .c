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
    else
    {
        printf("\n lowercase");
    }
    getch();
    return 0;
}
