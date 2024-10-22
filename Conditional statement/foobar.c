#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d",&num);

    if(num%3==0 && num%5==0)
    {
        printf("\n foo bar");
    }
    else if(num%3==0)
    {
        printf("\n foo");
    }
    else if(num%5==0)
    {
        printf("\n bar");
    }
    getch();
    return 0;
}
