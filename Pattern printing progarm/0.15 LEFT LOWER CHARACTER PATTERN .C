#include<stdio.h>
#include<conio.h>
int main()
{
    int  R=0,C=0,X=0;
    char ch='Q';
    printf("\n Enter a row size :");
    scanf("%d",&X);
    printf("\n Enter a column size :");
    scanf("%d",&X);
    for(R=1;R<=X;R++)
    {
        for(C=1;C<=X;C++)
        {
            if(R>=C)
            {
                printf("%c",ch);

            }

        }

    printf("\n");


    }
    printf("\n thank you ");

    getch();
    return 0;
}
