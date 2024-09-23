#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0,no2=0;
    up:

    printf("\n --------------####----------------\n");

    printf("\n Enter 1st number :");
    scanf("%d",&no1);
    printf("\n Enter 2nd number :");
    scanf("%d",&no2);
    if(no1==no2)
    {
        printf("\n both number are equal");
        goto up;
    }
    (no1>no2)? printf("\n # %d is max",no1): printf("\n $ %d is max",no2);

    printf("\n thank you");
    printf("\n --------------------####-------------------\n");
    getch();
    return 0;

}
