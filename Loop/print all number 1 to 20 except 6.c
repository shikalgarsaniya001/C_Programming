#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    for( int i=1;i<=10;i++)
    {
         if(i==6)
           {
                  continue;
           }

    printf("\n %d",i);
    }


    getch();
    return 0;
}
