
#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;
    printf("\n Enter any number:");
    scanf("%d",&no);
    if(no>0)
    {
        printf("\n %d is positive ",no);
    }
    else
    {
        printf("\n %d is negative ",no);
    }
    getch();
    return 0;
}
