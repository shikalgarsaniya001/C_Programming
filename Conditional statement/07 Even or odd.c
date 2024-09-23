#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;
     up:
printf("\n\n----------------#########-------------");
printf("\n Enter any number :");
scanf("%d",&no);
if(no==0)
{
    printf("\n number is neutral");
}
 else if(no%2==0)
{
    printf("\n %d is even number",no);
    goto up;
}
else
{
    printf("\n %d is even number odd",no);
}
printf("\n\n----------------#########-------------");
getch();
return 0;
}


