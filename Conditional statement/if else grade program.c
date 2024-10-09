#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    printf("Enter a marks :");
    scanf("%d",&marks);

    if(marks<=100 && marks>=90)
    {
        printf("\n A++");
    }

    else if (marks<=80 && marks>=70)
    {
        printf("\n A+");
    }
    else if (marks<=70 && marks>= 60)
    {
        printf("\n B");
    }
    else if (marks<=50 && marks>=35)
    {
        printf("\n C");
    }
    else if(marks<35 && marks>=0)
    {
        printf("\n Fail");
    }
    else
    {
        printf("\n invalid marks");
    }
    getch();
    return 0;
}
