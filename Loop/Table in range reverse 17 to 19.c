#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0;
    printf("\n\n ------table range of 17 to 19-------\n-");
    for(r=1;r<=10;r++)
    {
        for(c=17;c<=19;c++)
        {
            printf(" %3d",r*c);
        }
        printf("\n ");
    }
    getch();
    return 0;

}
