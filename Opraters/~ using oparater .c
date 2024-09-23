#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,res;
    printf("\n Enter any number :");
    scanf("%d",&no);
    printf("\n -----------*****--------");
    res=~no;
    printf("\n res %d=~%d",no,res);
    printf("\n ------------******--------");
    getch();
    return 0;
}
