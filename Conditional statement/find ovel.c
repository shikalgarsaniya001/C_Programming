#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter any character :");
    scanf("%c",&ch);
    if(ch=='a' || ch== 'e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I'|| ch=='O' || ch=='U')
    {
        printf("Enter a character is ovel");
    }
    else
    {
        printf("Enter a character is not ovel");
    }
    getch();
    return 0;

}
