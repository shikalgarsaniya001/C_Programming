#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,i=0;
    printf("\n _______________$$$$$_______________");
     printf(" \n Enter any given number :");
    scanf("%d",&no);
    printf("\n reverse table of %d \n ",no);

    for(i=10;i>=1;i--)
    {
        printf("\n %d * %d = %d",no,i,(no*i));
    }
     printf("\n _______________$$$$$_______________");
    getch();
    return 0;
}
