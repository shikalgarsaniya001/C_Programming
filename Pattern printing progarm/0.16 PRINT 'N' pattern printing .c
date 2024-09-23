#include<stdio.h>
#include<conio.h>
int main()
{
int R=0, C=0, X=0;

printf("Enter Row size  :");
scanf("%d",&X);
printf("Enter column size  :");
scanf("%d",&X);


printf("\n\n ==========**pattern**============\n\n");

for(R=1;R<=X;R++)
{
    for(C=1;C<=X;C++)
    {
        if (C==1 || C==X|| R==C )
        {
            printf(" *");
        }
        else
        {
            printf("  ");
        }
    }
    printf("\n");
}
printf("\n\n===============saniya===============\n\n");
getch();
return 0;
}
