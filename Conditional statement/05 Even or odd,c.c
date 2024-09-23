#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;
    up:
printf("\n Enter any number :");
scanf("%d",&no);
if(no%2==0)
{
    printf("\n %d is even number ",no);
}
else
{
    printf("\n %d is  odd number ",no);
    goto up;
}
getch();
return 0;
}
