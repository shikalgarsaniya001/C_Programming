
#include<stdio.h>
#include<conio.h>
int main()
{
    int Num[5] ={0};
    printf("\n Enter a 1 element :");
    scanf("%d",&Num[0]);
    printf("\n Enter a 2 element :");
    scanf("%d",&Num[1]);
    printf("\n Enter a 3 element :");
    scanf("%d",&Num[2]);
    printf("\n Enter a 4 element :");
    scanf("%d",&Num[3]);
    printf("\n Enter a 5 element :");
    scanf("%d",&Num[4]);

    printf("\n ---------------------------");

    printf("\n value of element 1 <%d>",Num[0]);
    printf("\n value of element 2 <%d>",Num[1]);
    printf("\n value of element 3 <%d>",Num[2]);
    printf("\n value of element 4 <%d>",Num[3]);
    printf("\n value of element 5 <%d>",Num[4]);
    getch();

    return 0;

}

