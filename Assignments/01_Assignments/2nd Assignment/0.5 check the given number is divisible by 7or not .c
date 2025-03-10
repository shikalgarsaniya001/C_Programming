#include<stdio.h>
#include<stdio.h>
int main()
{
    int Num=0;
    printf("Enter a number :");
    scanf("%d",&Num);

    if(Num%7==0)
    {
        printf("\n The given number %d is divisible by 7 ");
    }
    else
    {
        printf("\n The given number%d  is not divisible by 7");
    }
    getch();
    return 0;
}
