#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    do
    {
        printf("\n Enter a number :");
        scanf("%d",&n);
        printf("%d",n);
        if(n%=2!=0)
        {
            break;
        } while(1);

    }
    printf("\n Thank you");
    getch();
    return 0;

}
