#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    printf("\n Enter a marks");
    scanf("%d",&marks);

    if(marks>=90)
    {
        printf("\n A++");
    }
    else if(marks<=90 && marks>=70)
    {
        printf("\n A");

    }
    else if (marks<=70 && marks>=50)
    {
        printf("\n B");
    }
    else if (marks<=50 && marks>=35)
    {
        printf("\n C");
    }
    else
    {
        printf("\n fail");
    }
    getch();
    return 0;
}
