#include<stdio.h>
#include<conio.h>
int main()
{
    int no1,no2,no3 ,sum;

    printf("Enter a 1st number :");
    scanf("%d",&no1);
    printf("Enter a 2nd number :");
    scanf("%d",&no2);
    printf("Enter a 3rd number :");
    scanf("%d",&no3);
    sum=no1+no2+no3;
    if(sum==180)
    {

        printf("sum of angals is %d its trangal",sum);
    }
    else
    {
        printf(" sum of angals is %d its not triangal",sum);
    }
    getch();
    return 0;


}
