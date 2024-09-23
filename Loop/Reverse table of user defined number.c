#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,i=10;
    printf("\n _______________$$$$$_______________");
     printf(" \n Enter any given number :");
    scanf("%d",&no);
    printf("\n reverse table of %d \n ",no);

    while (i>=1)
    {
        printf("\n %d * %d = %d",no,i,(no*i));
        i--;

    }
     printf("\n _______________$$$$$_______________");
    getch();
    return 0;
}
