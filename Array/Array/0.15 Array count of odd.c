#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int i=0,Bills[7]={0},OCnt=0;
    printf("\n Enter today bill =");

     for(i=0;i<7;i++)
     {
         printf("\n Enter bill =");
         scanf("%d",&Bills[i]);

         if(Bills[i]%2==1)
         {
             OCnt++;
         }

     }
    printf("\n\n Even amount =%d",OCnt);
     getch();
     return 0;
}
