#include<stdio.h>
#include<conio.h>
int main()
{
    int months;
    printf("Enter a months:");
    scanf("%d",&months);

    if(months==1)
    {
        printf("January");
    }
    else if(months==2)
    {
        printf("February");
    }
    else if(months==3)
    {
        printf("March");
    }
    else if (months==4)
    {
        printf("April");
    }
    else if (months==5)
    {
        printf("May");
    }
    else if (months==6)
    {
        printf("june");
    }
    else if (months==7)
    {
        printf("july");
    }
    else if (months==8)
    {
        printf("August");
    }
    else if (months==9)
    {
        printf("september");
    }
    else if (months==10)
    {
        printf("October");
    }
    else if (months==11)
    {
        printf("November");
    }
    else if (months==12)
    {
        printf("December");
    }
    else
    {
        printf("invalid months");
    }
    getch();
    return 0;


}
