#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0,no2=0;
    printf("\n ________________%%%%%__________________");
    printf("\n Enter 1st number :");
    scanf("%d",&no1);
    printf("\n Enter 2nd number :");
    scanf("%d",&no2);

    (no1==no2)? printf("\n both number are same"):
    (no1>no2)? printf("\n # %d is max",no1): printf("\n $  %d is max",no2);
    printf("\n ________________%%%%%__________________");

    getch();
    return 0;
}
