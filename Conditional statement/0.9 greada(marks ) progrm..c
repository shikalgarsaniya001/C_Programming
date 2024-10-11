#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    printf("\n Enter a number :");
    scanf("\n %d",&marks);

    if(marks<=30 && marks>=0)
    {
        printf("\n fail");
    }
    else if(marks<=100 && marks>30)
    {
        printf("\n pass");
    }
    else
    {
        printf("\n invalid marks");
    }
    getch();
    return 0;
}
