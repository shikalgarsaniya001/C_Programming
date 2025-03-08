#include<stdio.h>
#include<conio.h>
int main()
{
    int no;
    printf("enter any number :");
    scanf("%d",&no);
    if(no%2==0)
    {
        printf("%d is even number",no);
    }
    else
    {
        printf("%d is odd number ",no);
    }
    getch();
    return 0;
}
