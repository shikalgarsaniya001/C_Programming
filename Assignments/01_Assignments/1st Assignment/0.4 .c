#include<stdio.h>
int main()
{
    int No1,No2, Mul;

    printf("\n Enter a 1st number :");
    scanf("%d",& No1);

    printf("\n Enter a 2nd number :");
    scanf("%d",& No2);

    Mul= No1 * No2;

    printf("\n Mul of two number %d * %d =%d.",No1,No2,Mul);
    getch();
    return 0;

}
