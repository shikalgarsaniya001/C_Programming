#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int i=0, Bills[7]={0}, Max=0;
    printf("\n Enter today bill =");

     for(i=0; i<7; i++)
     {
         printf("\n\n Enter Max No %d ",i+1);
         scanf("%d",&Bills[i]);

         if((Bills[i]>Max) || (i==0))
         {
             Max=Bills[i];
         }
         getch();

     }
    printf("\n\n Max bill =%d",Max);

     getch();
     return 0;
}
