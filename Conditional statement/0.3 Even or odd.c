
#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;

printf("Enter any number :");
scanf("%d",&no);
printf("\n -----------####---------");
(no%2==0)? printf("\n %d is even",no):printf("\n %d is odd",no);
printf("\n -----------####-----------");
printf("\n\n Thank you");

getch();
return 0;
}
