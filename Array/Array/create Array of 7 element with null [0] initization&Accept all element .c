#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int Bill[5]={0} ,i=0;

  for (i = 0; i < 7; i++)
{
        printf("\n Enter bill %d: ", i + 1);
        scanf("%d",&Bill[i]);
}
    printf("\n Value of bill is 1 = %d",Bill[0]);
    printf("\n Value of bill is 2 = %d",Bill[1]);
    printf("\n Value of bill is 3 = %d",Bill[2]);
    printf("\n Value of bill is 4 = %d",Bill[3]);
    printf("\n Value of bill is 5 = %d",Bill[4]);
    printf("\n Value of bill is 6 = %d",Bill[5]);
    printf("\n Value of bill is 7 = %d",Bill[6]);

     getch();
    return 0;

}

