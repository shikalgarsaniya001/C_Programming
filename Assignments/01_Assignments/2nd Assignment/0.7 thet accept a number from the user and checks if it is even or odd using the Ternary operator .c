#include<stdio.h>
#include<conio.h>
int main()
{
    int No;
    printf("\n Enter a number :");
    scanf("%d",&No);

    No %2 == 0 ? printf(" Even number"): printf("odd number");

    getch();
    return 0;
}
