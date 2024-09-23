#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;

printf("Enter any number :");
scanf("%d",&no);
if(no%2==0)
{
    printf("\n %d is even",no);
}
else

{
    printf("\n %d is odd",no);
}

getch();
return 0;
}
