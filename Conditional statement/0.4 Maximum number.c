#include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0,no2=0;
    printf("\n -------------########------------");
    up:
    printf("\n Enter any 2 integer :");
    printf("\n Enter a 1st number :");
    scanf("%d",&no1);
    printf("\n Enter a 2nd number :");
    scanf("%d",&no2);
    if(no1==no2)
    {
        printf("\n both number are equal ");
    }
    goto up;

   (no1>no2)? printf("\n maximum number %d is",no1): printf("\n maximum number %d is",no2);

    printf("\n thank you");
    printf("\n\n---------------########--------------");
    getch();
    return 0;


}

