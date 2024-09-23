
#include<stdio.h>
#include<conio.h>
int main()
{

    int no1=0,no2=0,res=0;
    printf("\n Enter 1st number :");
    scanf("%d",&no1);
    printf("\n Enter 2nd number :");
    scanf("%d",&no2);
    printf("\n --------------------*****------------------------");
    res=no1 ^ no2;
    printf("\n res %d ^ %d = %d",no1,no2,res);
    printf("\n ---------------------*****------------------------");
    getch();
    return 0;
}
