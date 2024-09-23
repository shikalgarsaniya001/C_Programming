#include<stdio.h>
#include<conio.h>
int main()
{
    int no=7,i=1;
    printf("\n reverse table of 7 \n ",no);
    for(i=10;i>=1;i--)
    {
        printf("\n %d * %d = %d",no,i,(no*i));
    }
    getch();
    return 0;
}
