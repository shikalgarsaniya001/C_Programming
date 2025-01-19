#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,Bills[5]={0},srchNo=0;

    printf("\n\n Enter today bills\n");

    for(i=0;i<5;i++)
    {
        printf("\n Enter bill no %d=",i+1);
        scanf("%d",&Bills[i]);
    }
    getch();

    printf("\n Enter bill Amount to search =:");
    scanf("%d",&srchNo);

    for(i=0;i<7;i++)
    {
        if(srchNo==Bills[i])
        {
            break;
        }
    }
    printf("\n\n Enter number is %d and its index is %d",srchNo,i+1);
    getch();
    return 0;
}

