#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter a year");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("leap year :");
    }
    else
    {
        printf("non leap year :");
    }
    getch();
    return 0;
}
