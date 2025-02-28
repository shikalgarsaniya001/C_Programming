#include<stdio.h>
int main()
{
    int No1,No2, No3, Total;
    float per=0.0;
    printf("\n***************************************");

    printf("\n Enter a 1st subject marks :");
    scanf("%d",& No1);
    printf("\n Enter a 2nd subject marks :");
    scanf("%d",&No2);
    printf("\n Enter a 3rd subject marks :");
    scanf("%d",&No3);
    printf("\n***************************************");
    Total=No1+No2+No3;
    {
        printf("\n Total mark of subject= %d",Total);
    }

    per= (float )Total/3;
    {
         printf("\n Percentage of mark =%f :",per);
    }
    printf("\n***************************************");
    getch();

    return 0;
}
