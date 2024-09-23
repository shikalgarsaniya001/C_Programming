#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;
    up:
    printf("Enter any number :");
    scanf("%d",&no);
    if(no%2==0)
    {
        printf("%d is even",no);
    }
    goto up;
    else
    {
        printf("%d is odd",no);
    }
    getch();
    return 0;

}
