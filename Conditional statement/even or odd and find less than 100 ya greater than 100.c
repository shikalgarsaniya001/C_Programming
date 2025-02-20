#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d",&num);
    if(num%2==0)
    {
        if(num>100)
        {
            printf("%d is even and greater than 100",num);
        }
        else
        {
            printf("%d is even and less than 100",num);
        }
    }
    else
    {

        if (num<100)

            {
                printf("%d is odd and less than 100",num);

            }

            else
            {
                printf("%d is odd and greater than 100",num);
            }

    }
    getch();
    return 0;
}
