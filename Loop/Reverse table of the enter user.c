
#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,spt=0,ept=0;
    printf("Enter 1st number :",spt);
    scanf("%d",&spt);
    printf("Enter 2nd= number :",ept);
    scanf("%d",&ept);
    printf("\n given number from %d to %d =\n",spt,ept);
    if(spt<ept)
         for(r=1;r<=10;r++)
         {
             for(c=spt;c<=ept;c++)
             {
                 printf("%5d",r*c);
             }
             printf("\n");

        }
        else
              for(r=1;r<=10;r++)
         {
             for(c=spt;c>=ept;c--)
             {
                 printf("%5d",r*c);
             }
             printf("\n");
        }

      printf("\n thank you");
     return 0;

}
