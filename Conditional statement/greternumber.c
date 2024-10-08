#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0, no2=0, result=0, num=50;
    printf("enter 1st number :");
    scanf("%d",&no1);
    printf("enter 2nd number :");
    scanf("%d",&no2);

    if(no1>no2)
    {
        result=no1+num;
        printf("%d is saniya greater number ",no1);
         printf("\n %d+%d=%d",no1,num,result);
    }
    else
    {
        result=no2+num;
        printf("%d is greater number",no2);
        printf("\n %d+%d=%d",no2, num, result);
    }

    getch();
    return 0;
}
