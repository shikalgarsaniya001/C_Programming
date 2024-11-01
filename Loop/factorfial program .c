#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    int num,fact =1;
    printf("\n Enter a number :");
    scanf("\n %d",&num);

    for(int i=1; i<=num;i++)



    fact=fact*i;

    printf("\n factorial number is %d",fact);
    getch();
    return 0;
}
