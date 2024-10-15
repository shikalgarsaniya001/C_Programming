#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("\n Enter a number :");
    scanf("\n %d",&n);
    int i=0;
    while( i<=n )
    {
        printf("\n %d",i);
        i++;
    }
    getch();
    return 0;
}

