#include<stdio.h>
#include<conio.h>
int main()
{
int R=0, C=0,Rsize=0,Csize=0;
printf("\n Enter ROW :");
scanf("%d",&Rsize);
printf("\n Enter column :");
scanf("%d",&Csize);
printf("\n\n =============pattern=============\n\n");

for(R=1;R<=Rsize;R++)
{
    for (C=1;C<=Csize;C++)
    {
        if(R==1 ||  R==Rsize || C==1 || C==Csize  )
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
printf("\n\n ============ THANK YOU===========\n\n ");
return 0;
}
