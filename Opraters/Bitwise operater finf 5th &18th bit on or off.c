#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,ret=0;
    printf("\n Enter any number :");
    scanf("%d",&no);
    if(((no>>4)&1) && ((no>>17)&1) )
    {
        printf("\n 5th & 18th bit is on");
    }
  else if((no>>17)&1)
    {
        printf("\n 18th bit is on & 5th bit is off");
    }
    else if ((no>>4)&1)
    {
        printf("\n 5th bit is on & 15th bit is off");
    }
    else
    {
        printf("\n both the 5th & 18th bit is off");
    }
    getch();
    return 0;
}
