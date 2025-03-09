#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0,no2=0,no3=0;
    printf("\n -----------------################------------------");
    printf("\n Enter any 2 integer :");

    printf("\n Enter 1st number :");
    scanf("%d",&no1);
    printf("\n Enter 2nd number :");
    scanf("%d",&no2);
    printf("\n Enter 3rd number :");
    scanf("%d",&no3);
    if((no1==no2)&&(no2==no3))
    {
        printf("\n All three numbers are equal");
    }
    else if((no1>=no2)&& (no1>=no3))
    {
        printf("\n maximu number %d is ",no1);
    }
     else if((no2>=no1)&& (no2>=no3))
     {
        printf("\n maximu number %d is ",no2);
     }
     else if((no3>=no1)&& (no3>=no2))
     {
        printf("\n maximu number %d is ",no3);
     }
    else
    {
        printf("\n invalid");
    }
    printf("\n thank you");
    printf("\n ------------------------################-----------------");
    getch();
    return 0;
}

