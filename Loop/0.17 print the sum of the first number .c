#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("\n Enter a number :");
    scanf("\n %d",&n);
    int sum=0 ,i=1;
    for( int i=1; i<=n; i++)
    {
          sum=sum+i;

    }
     printf("\n sum is %d",sum);

     for(i=n; i>=1; i--)
     {
         printf("%d",i);
     }

    getch();
    return 0;
}

