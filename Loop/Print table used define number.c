#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,i=1;
    printf("\n ---------------------#########---------------");
    printf("\n Enter any number :");
    scanf("%d",&no);
    while(i<=10)
    {
        printf("\n %d*%d =%d",no,i,(no*i));
        i++;
    }
    printf("\n ---------------------#########---------------");
    getch();
    return 0;
}
