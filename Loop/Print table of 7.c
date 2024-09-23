
#include<stdio.h>
#include<conio.h>
int main()
{
    int no=7,i=1;
    printf("\n table of 7 \n ",no);
    while (i<=10)
    {
        printf("\n %d * %d = %d",no,i,(no*i));
        i++;
    }
    getch();
    return 0;
}
