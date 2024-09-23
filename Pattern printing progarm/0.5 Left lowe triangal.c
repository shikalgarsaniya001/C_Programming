#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0,C=0,x=0;
    printf("Enter any row :");
    scanf("%d",&x);
    printf("Enter ant column :");
    scanf("%d",&x);
    for(R=1;R<=x;R++)
    {
        for(C=1;(R>=C); C++)
             {
                 printf(" * ");
             }

         printf("\n");
     }


        getch();
        return 0;
    }
