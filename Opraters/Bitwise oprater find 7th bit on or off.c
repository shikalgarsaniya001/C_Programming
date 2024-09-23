#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;
    printf("Enter any number :");
    scanf("%d",&no);
    if(no&(1<<6))
    {
        printf("\n 7th bit is on");

    }
    else
    {
        printf("7th bit is off");
    }
    getch();
    return 0;
}
