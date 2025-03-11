#include<stdio.h>
#include<conio.h>
int main()
{
    printf("\n --------------****---------------");
    int num;
    printf("\n Enter any number :");
    scanf("%d",&num);
    if(num==1)
    {
        printf(" The day of the week is : Sunday");
    }
    else if(num==2)
    {
        printf(" The day of the week is : Monday");
    }
    else if (num==3)
    {
        printf(" The day of the week is : Tuesday");
    }
    else if(num==4)
    {
        printf(" The day of the week is : Wednesday");
    }
    else if(num==5)
    {
        printf(" The day of the week is : Thursday");
    }
    else if (num==6)
    {
        printf(" The day of the week is : Frieday");
    }
    else if(num==7)
    {
        printf(" The day of the week is : Saturday");
    }
    else
    {
        printf("invalid day");
    }
    printf("\n --------------****---------------");
    getch();
    return 0;


}


