#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0,no2=0 ,result=0,sum=50;
    printf("\n ----------------****-----------------");
    printf("\n Enter 1st number :");
    scanf("%d",&no1);
    printf("\n Enter 2nd number :");
    scanf("%d",&no2);
    if(no1>no2)
    {
        result=no1+sum;
        printf("%d is greater number",no1);
         printf("%d+%d=%d",no1,sum,result);
    }
    else if(no2>no1)
    {
        result=no1+sum;
        printf("%d is greater number",no2);
        printf("%d+%d=%d",no2,sum,result);
    }
    else if(no1=no2)
    {
       printf("All number equal");
    }
    printf("\n ----------------****-----------------");
    getch();
    return 0;


}


