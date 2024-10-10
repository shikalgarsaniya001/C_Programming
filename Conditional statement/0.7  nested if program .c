#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("\n Enter a number :");
    scanf("\n %d",& num);
    if(num>=0)
    {
          printf("\n positive number");

         if(num%2==0)
       {
           printf("\n Even number ");
       }
       else
       {
           printf("\n Odd number ");
       }


    }

    else
    {
        printf("\n negative number");
    }
    getch();
    return 0;
}

