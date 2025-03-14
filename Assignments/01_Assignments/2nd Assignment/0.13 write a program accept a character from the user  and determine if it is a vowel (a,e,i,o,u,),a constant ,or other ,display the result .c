#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;

    printf("\n Enter a character :");
    scanf("%c",&ch);

    if(ch =='a' || ch =='e' || ch=='i' || ch =='o' || ch =='u')
    {
        printf("\n The character '%c' is a vowel",ch);
    }
    else if(ch>='a'&& ch<='z'|| ch>='A' && ch<='Z')
    {
        printf("\n The character '%c' is a consonant",ch);
    }
    else
    {
        printf(" \n The character '%c' is a other",ch);
    }
    getch();
    return 0;
}
