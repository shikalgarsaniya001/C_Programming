#include<stdio.h>
#include<STDIO.h>
int main()
{
    int N1=0,N2=0,POW=1,i=1;
printf("\n Enter a base:");
scanf("%d",&N1);
printf("\n Enter a exponent:");
scanf("%d",&N2);
while(i<=N2)
{
    POW=POW*N1;
      i++;
}
printf("\n power %d raise to %d =%d.", N1,N2,POW );
getch();
return 0;
}

