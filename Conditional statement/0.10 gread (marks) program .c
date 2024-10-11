#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    printf("\n Enter a number :");
    scanf("\n %d",&marks);

    if(marks<=30)
    {
        printf("\n c");
    }
     else if (marks<=70 && marks>=30);
    {
        printf("\n B");
    }
     else if (marks<=80  && marks>=70);
    {
        printf("\n A");
    }
    else
    {
        printf("\n invalid marks");
    }
    getch();
    return 0;
}

