
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0, n=0, sum=0;
    printf("\n Enter a number :");
    scanf("\n %d",& n);
    for(int i=0; i<=n;i++)
      sum=sum+i;
    {
        printf("\n sum of the given number %d",sum);
    }
    for(i=n; i>=1;i--)
    {
        printf("\n  reverse number %d",i);
    }
    getch();
    return 0;

}
