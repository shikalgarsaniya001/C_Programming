#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("\n ########################");
    printf("\n Enter a year :");
    scanf("%d" , & year);
    if(year %4 ==0)
    {
        printf("\n leap year ");
    }
    else
    {
        printf("\n non leap year ");
    }
    printf("\n ########################");
    getch();
    return 0;
}

