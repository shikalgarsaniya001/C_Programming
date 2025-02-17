#include<conio.h>
#include<stdio.h>
int main()
{
    int iNum[5]={};

    printf("\n value of 1 element %d",iNum[0]);
    printf("\n value of 2 element %d",iNum[1]);
    printf("\n value of 3 element %d",iNum[2]);
    printf("\n value of 4 element %d",iNum[3]);
    printf("\n value of 5 element %d",iNum[4]);

    getch();

    iNum[2]=15;
    iNum[3]=17;
    iNum[0]=iNum[3]+5;   ///17+5=22

    printf("\n------------------------------");

    printf("\n value of 101 element %d",iNum[0]);
    printf("\n value of 201 element %d",iNum[1]);
    printf("\n value of 301 element %d",iNum[2]);
    printf("\n value of 401 element %d",iNum[3]);
    printf("\n value of 501 element %d",iNum[4]);
    getch();
}
