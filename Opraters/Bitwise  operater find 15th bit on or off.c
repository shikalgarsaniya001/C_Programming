#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,ret=0;
    printf("Enter any number :");
    scanf("%d",&no);
    if((no>>14) &  1)
    {
        printf("15th bit is on");
    }
    else
    {
        printf("15th bit if off");
    }
    getch();
    return 0;

}
