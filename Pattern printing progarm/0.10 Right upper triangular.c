#include<stdio.h>
#include<conio.h>
int main()
{
    int  R=0,C=0,X=0;
    printf("\n Enter a row size :");
    scanf("%d",&X);
    printf("\n Enter a column size :");
    scanf("%d",&X);
    for(R=0;R<=X;R++)
    {
        for(C=0;C<=X;C++)
        {
            if(R<=C)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }

    printf("\n");


    }
    printf("\n thank you ");

    getch();
    return 0;
}
