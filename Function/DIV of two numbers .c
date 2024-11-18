#include<stdio.h>
#include<conio.h>
int Div(int N1, int N2)
{
    int Ans=0;
    Ans = N1 / N2;
    return Ans;
}


int main()
{
    int Num1 = 0, Num2 = 0, Result = 0;
    printf("\n Enter a 1st  Number  =  ");
    scanf("%d",&Num1);
    printf("\n Enter a 2nd number = ");
    scanf("%d",&Num2);
    Result = div (Num1 , Num2);
    printf("\n Div of %d and %d is = %d",Num1,Num2,Result);


    getch();
    return 0;

}


