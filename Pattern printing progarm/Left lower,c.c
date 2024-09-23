#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0,C=0,X=0;
    char ch='A';
    printf("\n Enter a row :");
    scanf("%c",&X);
    printf("\n Enter a column :");
    scanf("%c",&X);
    for(R=1;R<=X;R++)
    {
        for(C=1;C<=X;C++)
        {
            if(R>=C)
            {
                printf("%c",ch);
                ch+=3;
                if(ch>'z')
                {
                    ch='A'+(ch-91);
                }
            }

        }
         printf("\n -----------THANK YOU----------");

    }
    getch();
    return 0;


}
