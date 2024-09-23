#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0,no2=0;
    up:
    printf("\n Enter a 1st number :");
    scanf("%d",&no1);
    printf("\n Enter a 2nd number :");
    scanf("%d",&no2);

    if(no1==no2)
    {
        printf("\n both number are equal");
        goto up;
    }
   else if(no1>no2)
    {
        printf("\n %d is max",no1);
    }
    else
    {
        printf("\n %d is max",no2);
    }
    getch();
    return 0;
}
